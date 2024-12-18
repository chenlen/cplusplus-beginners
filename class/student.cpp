#include "student.h"

void Func(Student* s)
{

}

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
