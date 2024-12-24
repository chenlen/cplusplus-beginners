#pragma once

#include <string>
#include <vector>

class Person
{
public:
    Person(const std::string& name, int age);
    Person(const Person& rhs);
    Person(Person&& rhs) noexcept;
    Person& operator=(const Person& rhs);
    Person& operator=(Person&& rhs) noexcept;
    ~Person();

public:
    void SetName(const std::string& name);
    std::string GetName() const;

    void SetAge(int age);
    int GetAge() const;

private:
    std::string name_;
    int age_;
};

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
    UndergraduateStudent(const std::string& name, int id, int age, const std::string& major, int year);
    UndergraduateStudent(const UndergraduateStudent& rhs);
    UndergraduateStudent(UndergraduateStudent&& rhs) noexcept;
    UndergraduateStudent& operator=(const UndergraduateStudent& rhs);
    UndergraduateStudent& operator=(UndergraduateStudent&& rhs) noexcept;
    ~UndergraduateStudent();

    void SetMajor(const std::string& major);
    std::string GetMajor() const;

    void SetYear(int year);
    int GetYear() const;

private:
    std::string major_;
    int year_;
};

class GraduateStudent : public Student
{
public:
    GraduateStudent(const std::string& name, int id, int age, const std::string& researchTopic, const std::string& advisor);
    GraduateStudent(const GraduateStudent& rhs);
    GraduateStudent(GraduateStudent&& rhs) noexcept;
    GraduateStudent& operator=(const GraduateStudent& rhs);
    GraduateStudent& operator=(GraduateStudent&& rhs) noexcept;
    ~GraduateStudent();

    void SetResearchTopic(const std::string& researchTopic);
    std::string GetResearchTopic() const;

    void SetAdvisor(const std::string& advisor);
    std::string GetAdvisor() const;

private:
    std::string researchTopic_;
    std::string advisor_;
};
