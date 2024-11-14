#pragma once

class Student
{
public:
    Student(const char* name, int id, int age);
    Student(const Student& rhs);
    Student& operator=(const Student& rhs);
    ~Student();

public:
    void SetName(const char* name);
    const char* GetName() const;

    void SetID(int id);
    int GetID() const;

    void SetAge(int age);
    int GetAge() const;

    void AddCourse(int id);
    int GetCourseSize() const;
    int GetCourse(int index) const;

private:
    const char* name_;
    int id_;
    int age_;

    int size_ = 0;
    int* courses_ = nullptr;
};
