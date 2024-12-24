// © 2024 C++ 從入門到入土 https://chenlen.com

#include "student.h"
#include <iostream>

int main()
{
    Student s("Mike", 1131823, 17);

    UndergraduateStudent us("Jerry", 1131224, 19, "Computer Science");
    us.GetMajor();
}
