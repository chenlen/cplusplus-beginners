#include "student.h"

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

///////////////
UndergraduateStudent::UndergraduateStudent(const std::string& name, int id, int age, const std::string& major, int year)
    : Student(name, id, age), major_(major), year_(year) {
}

UndergraduateStudent::UndergraduateStudent(const UndergraduateStudent& rhs)
    : Student(rhs), major_(rhs.major_), year_(rhs.year_) {
}

UndergraduateStudent::UndergraduateStudent(UndergraduateStudent&& rhs) noexcept
    : Student(std::move(rhs)), major_(std::move(rhs.major_)), year_(rhs.year_) {
}

UndergraduateStudent& UndergraduateStudent::operator=(const UndergraduateStudent& rhs)
{
    if (this != &rhs)
    {
        Student::operator=(rhs);
        major_ = rhs.major_;
        year_ = rhs.year_;
    }
    return *this;
}

UndergraduateStudent& UndergraduateStudent::operator=(UndergraduateStudent&& rhs) noexcept
{
    if (this != &rhs)
    {
        Student::operator=(std::move(rhs));
        major_ = std::move(rhs.major_);
        year_ = rhs.year_;
    }
    return *this;
}

UndergraduateStudent::~UndergraduateStudent() {}

void UndergraduateStudent::SetMajor(const std::string& major) { major_ = major; }
std::string UndergraduateStudent::GetMajor() const { return major_; }

void UndergraduateStudent::SetYear(int year) { year_ = year; }
int UndergraduateStudent::GetYear() const { return year_; }

//////////////////////
GraduateStudent::GraduateStudent(const std::string& name, int id, int age, const std::string& researchTopic, const std::string& advisor)
    : Student(name, id, age), researchTopic_(researchTopic), advisor_(advisor) {
}

GraduateStudent::GraduateStudent(const GraduateStudent& rhs)
    : Student(rhs), researchTopic_(rhs.researchTopic_), advisor_(rhs.advisor_) {
}

GraduateStudent::GraduateStudent(GraduateStudent&& rhs) noexcept
    : Student(std::move(rhs)), researchTopic_(std::move(rhs.researchTopic_)), advisor_(std::move(rhs.advisor_)) {
}

GraduateStudent& GraduateStudent::operator=(const GraduateStudent& rhs)
{
    if (this != &rhs)
    {
        Student::operator=(rhs);
        researchTopic_ = rhs.researchTopic_;
        advisor_ = rhs.advisor_;
    }
    return *this;
}

GraduateStudent& GraduateStudent::operator=(GraduateStudent&& rhs) noexcept
{
    if (this != &rhs)
    {
        Student::operator=(std::move(rhs));
        researchTopic_ = std::move(rhs.researchTopic_);
        advisor_ = std::move(rhs.advisor_);
    }
    return *this;
}

GraduateStudent::~GraduateStudent() {}

void GraduateStudent::SetResearchTopic(const std::string& researchTopic) { researchTopic_ = researchTopic; }
std::string GraduateStudent::GetResearchTopic() const { return researchTopic_; }

void GraduateStudent::SetAdvisor(const std::string& advisor) { advisor_ = advisor; }
std::string GraduateStudent::GetAdvisor() const { return advisor_; }