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

class UndergraduateStudent : public Student
{
public:
    UndergraduateStudent(const std::string& name, int id, int age, const std::string& major);
    UndergraduateStudent(const UndergraduateStudent& rhs);
    UndergraduateStudent(UndergraduateStudent&& rhs) noexcept;
    UndergraduateStudent& operator=(const UndergraduateStudent& rhs);
    UndergraduateStudent& operator=(UndergraduateStudent&& rhs) noexcept;
    ~UndergraduateStudent();

public:
    void SetMajor(const std::string& major);
    std::string GetMajor() const;

private:
    std::string major_;
};
