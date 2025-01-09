#include "student.h"
#include <iostream>

Student::Student(const std::string& name, int id, int age) :
    name_(name),
    id_(id),
    age_(age)
{
}

Student::Student(const Student& rhs) :
    name_(rhs.name_),
    id_(rhs.id_),
    age_(rhs.age_),
    courses_(rhs.courses_)
{
}

Student::Student(Student&& rhs) noexcept :
    name_(std::move(rhs.name_)),
    id_(rhs.id_),
    age_(rhs.age_),
    courses_(std::move(rhs.courses_))
{
}

Student& Student::operator=(const Student& rhs)
{
    if (this != &rhs)
    {
        name_ = rhs.name_;
        id_ = rhs.id_;
        age_ = rhs.age_;
        courses_ = rhs.courses_;
    }

    return *this;
}

Student& Student::operator=(Student&& rhs) noexcept
{
    if (this != &rhs)
    {
        name_ = std::move(rhs.name_);
        id_ = rhs.id_;
        age_ = rhs.age_;
        courses_ = std::move(rhs.courses_);
    }

    return *this;
}

Student::~Student()
{
}

void Student::SetName(const std::string& name)
{
    name_ = name;
}

std::string Student::GetName() const
{
    return name_;
}

void Student::SetID(int id)
{
    id_ = id;
}

int Student::GetID() const
{
    return id_;
}

void Student::SetAge(int age)
{
    if (age >= 0)
    {
        age_ = age;
    }
}

int Student::GetAge() const
{
    return age_;
}

void Student::AddCourse(int id)
{
    courses_.push_back(id);
}

int Student::GetCourseSize() const
{
    return courses_.size();
}

int Student::GetCourse(int index) const
{
    if (index < courses_.size())
    {
        return courses_[index];
    }
    else
    {
        return -1;
    }
}

void Student::Introduce() const
{
    std::cout << "I am a student. my name is " << GetName() << ".\n";
}

//////////////////////////////////////////
UndergraduateStudent::UndergraduateStudent(const std::string& name, int id, int age, const std::string& major) :
    Student(name, id, age),
    major_(major)
{
}

UndergraduateStudent::UndergraduateStudent(const UndergraduateStudent& rhs) :
    Student(rhs),
    major_(rhs.major_)
{
}

UndergraduateStudent::UndergraduateStudent(UndergraduateStudent&& rhs) noexcept :
    Student(std::move(rhs)),
    major_(std::move(rhs.major_))
{
}

UndergraduateStudent& UndergraduateStudent::operator=(const UndergraduateStudent& rhs)
{
    if (this != &rhs)
    {
        Student::operator=(rhs);
        major_ = rhs.major_;
    }

    return *this;
}

UndergraduateStudent& UndergraduateStudent::operator=(UndergraduateStudent&& rhs) noexcept
{
    if (this != &rhs)
    {
        Student::operator=(std::move(rhs));
        major_ = std::move(rhs.major_);
    }

    return *this;
}

UndergraduateStudent::~UndergraduateStudent()
{
}

void UndergraduateStudent::SetMajor(const std::string& major)
{
    major_ = major;
}

std::string UndergraduateStudent::GetMajor() const
{
    return major_;
}

void UndergraduateStudent::Introduce() const
{
    std::cout << "I am an undergraduate. my name is " << GetName() << " and my major is " << GetMajor() << ".\n";
}

//////////////////////////////////////////
GraduateStudent::GraduateStudent(const std::string& name, int id, int age, const std::string& research_topic) :
    Student(name, id, age),
    research_topic_(research_topic)
{
}

GraduateStudent::GraduateStudent(const GraduateStudent& rhs) :
    Student(rhs),
    research_topic_(rhs.research_topic_)
{
}

GraduateStudent::GraduateStudent(GraduateStudent&& rhs) noexcept :
    Student(std::move(rhs)),
    research_topic_(std::move(rhs.research_topic_))
{
}

GraduateStudent& GraduateStudent::operator=(const GraduateStudent& rhs)
{
    if (this != &rhs)
    {
        Student::operator=(rhs);
        research_topic_ = rhs.research_topic_;
    }

    return *this;
}

GraduateStudent& GraduateStudent::operator=(GraduateStudent&& rhs) noexcept
{
    if (this != &rhs)
    {
        Student::operator=(std::move(rhs));
        research_topic_ = std::move(rhs.research_topic_);
    }

    return *this;
}

GraduateStudent::~GraduateStudent()
{
}

void GraduateStudent::SetResearchTopic(const std::string& research_topic)
{
    research_topic_ = research_topic;
}

std::string GraduateStudent::GetResearchTopic() const
{
    return research_topic_;
}

void GraduateStudent::Introduce() const
{
    std::cout << "I am a graduate. my name is " << GetName() << " and my research topic is " << GetResearchTopic() << ".\n";
}
