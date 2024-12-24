// © 2024 C++ 從入門到入土 https://chenlen.com

#include "student.h"
#include <iostream>

int main()
{
    int a = 5;
    int b = 4;
    int c = 3;
    (a = b) = c;
    std::cout << a << ", " << b << ", " << c << "\n";

    Student s1("Mike", 1131823, 17);
    Student s2("Jerry", 1131823, 17);
    Student s3("Jordan", 1131823, 17);
    (s1 = s2) = s3;
    std::cout << s1.GetName() << ", " << s2.GetName() << ", " << s3.GetName() << "\n";
}
