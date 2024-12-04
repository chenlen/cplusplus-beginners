// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>
#include "student.h"

int main()
{
    Student s1("Mike", 1131823, 17);
    std::cout << s1.GetName() << "\n";
    std::cout << s1.GetID() << "\n";
    std::cout << s1.GetAge() << "\n";

    s1.AddCourse(786);
    s1.AddCourse(324);
    s1.AddCourse(262);
    for (int i = 0; i < s1.GetCourseSize(); ++i)
    {
        std::cout << s1.GetCourse(i) << " ";
    }

    std::cout << "\n";

    Student s2 = s1;
    Student s3("Jerry", 1131825, 25);
    (s1 = s2) = s3;

    int a = 5;
    int b = 4;
    int c = 3;
    (a = b) = c;
}
