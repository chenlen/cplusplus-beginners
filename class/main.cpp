// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>
#include "student.h"

int main()
{
    const Student s1("Mike", 1131823, 17);
    std::cout << s1.GetName() << "\n";
    std::cout << s1.GetID() << "\n";
    std::cout << s1.GetAge() << "\n";

    Student s2("Jerry", 1131824, 18);
    std::cout << s2.GetName() << "\n";
    std::cout << s2.GetID() << "\n";
    std::cout << s2.GetAge() << "\n";

    s2.AddCourse(786);
    s2.AddCourse(324);
    s2.AddCourse(262);
    for (int i = 0; i < s2.GetCourseSize(); ++i)
    {
        std::cout << s2.GetCourse(i) << " ";
    }

    Student s3(s1);

    s3 = s2;
}
