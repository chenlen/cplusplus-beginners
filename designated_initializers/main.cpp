#include <iostream>
#include <string>

// case 1
//struct Student
//{
//    Student(const std::string& name, int id, int age) : 
//        name_(name), 
//        id_(id), 
//        age_(age)
//    {}
//
//    std::string name_;
//    int id_ = 0;
//    int age_ = 0;
//};

// case 2
//struct Student
//{
//private:
//    std::string name_;
//    int id_ = 0;
//    int age_ = 0;
//};

// case 3
//struct Person
//{
//    std::string name_;
//    int age_;
//};
//
//struct Student : public Person
//{
//    int id_ = 0;
//};

// case 4
//struct Student
//{
//    std::string name_;
//    int id_ = 0;
//    int age_ = 0;
//
//    virtual void func()
//    {}
//};

struct Student
{
    std::string name_;
    int id_ = 0;
    int age_ = 0;
};

union Data
{
    const char* name_;
    int age_ = 0;
};

int main()
{
    Student s1 =
    {
        .name_ = "Joe",
        .id_ = 1131823,
        .age_ = 18
    };

    Student s2 =
    {
        .name_ = "Mike",
        .age_ = 19
    };

    Student s3 =
    {
        .id_ = 1131824,
        .age_ = 20
    };

    Data d1 = { .name_ = "Jordan" };
    Data d2 = { .age_ = 20 };
}
