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

    virtual void Introduce() const;

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

    void Introduce() const override;

private:
    std::string major_;
};

class GraduateStudent : public Student
{
public:
    GraduateStudent(const std::string& name, int id, int age, const std::string& research_topic);
    GraduateStudent(const GraduateStudent& rhs);
    GraduateStudent(GraduateStudent&& rhs) noexcept;
    GraduateStudent& operator=(const GraduateStudent& rhs);
    GraduateStudent& operator=(GraduateStudent&& rhs) noexcept;
    ~GraduateStudent();

public:
    void SetResearchTopic(const std::string& research_topic);
    std::string GetResearchTopic() const;

    void Introduce() const override;

private:
    std::string research_topic_;
};
