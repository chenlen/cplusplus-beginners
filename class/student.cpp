#include "student.h"

Student::Student(const char* name, int id, int age) :
    name_(name),
    id_(id),
    age_(age)
{
}

Student::Student(const Student& rhs) :
    name_(rhs.name_),
    id_(rhs.id_),
    age_(rhs.age_),
    size_(rhs.size_),
    courses_(rhs.courses_)
{}

Student& Student::operator=(const Student& rhs)
{
    if (this != &rhs)
    {
        name_ = rhs.name_;
        id_ = rhs.id_;
        age_ = rhs.age_;
        size_ = rhs.size_;
        courses_ = rhs.courses_;
    }

    return *this;
}

Student::~Student()
{
    delete[] courses_;
}

void Student::SetName(const char* name)
{
    name_ = name;
}

const char* Student::GetName() const
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
    auto new_courses = new int[size_ + 1] {};
    for (int i = 0; i < size_; ++i)
    {
        new_courses[i] = courses_[i];
    }

    new_courses[size_] = id;

    delete[] courses_;

    courses_ = new_courses;
    ++size_;
}

int Student::GetCourseSize() const
{
    return size_;
}

int Student::GetCourse(int index) const
{
    if (index < size_)
    {
        return courses_[index];
    }
    else
    {
        return -1;
    }
}
