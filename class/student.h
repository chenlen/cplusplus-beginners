#pragma once

#include <string>
#include <vector>

class Student
{
public:
    Student(const std::string& name, int id, int age);
    Student(const Student& rhs);
    Student(Student&& rhs) noexcept;
    Student& operator=(const Student& rhs);
    Student& operator=(Student&& rhs) noexcept;
    ~Student();

public:
    void SetName(const std::string& name);
    std::string GetName() const;

    void SetID(int id);
    int GetID() const;

    void SetAge(int age);
    int GetAge() const;

    void AddCourse(int id);
    int GetCourseSize() const;
    int GetCourse(int index) const;

private:
    std::string name_;
    int id_;
    int age_;
    std::vector<int> courses_;
};
