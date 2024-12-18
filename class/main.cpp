// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>
#include "student.h"

Student Func()
{
    Student s("Jordan", 1131819, 27);
    s.AddCourse(786);
    s.AddCourse(324);
    return s;
}

int main()
{
    Student s1("Mike", 1131823, 17);
    s1.AddCourse(786);
    s1.AddCourse(324);
    s1.AddCourse(262);

    std::string name("Jerry");
    s1.SetName(name);
}
