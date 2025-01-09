// © 2024 C++ 從入門到入土 https://chenlen.com

#include "student.h"
#include <vector>

int main()
{
    std::vector<Student*> mba;
    mba.push_back(new Student("Mike", 1131823, 17));
    mba.push_back(new Student("Mike2", 1131823, 17));
    mba.push_back(new Student("Mike3", 1131823, 17));

    mba.push_back(new UndergraduateStudent("Jerry", 1161823, 20, "Computer Science"));
    mba.push_back(new UndergraduateStudent("Jerry2", 1161823, 20, "Computer Science"));
    mba.push_back(new UndergraduateStudent("Jerry3", 1161823, 20, "Computer Science"));

    mba.push_back(new GraduateStudent("John", 1201823, 23, "Artificial Intelligence"));
    mba.push_back(new GraduateStudent("John2", 1201823, 23, "Artificial Intelligence"));
    mba.push_back(new GraduateStudent("John3", 1201823, 23, "Artificial Intelligence"));
    mba.push_back(new GraduateStudent("John4", 1201823, 23, "Artificial Intelligence"));

    for (const auto& s : mba)
    {
        s->Introduce();
    }

    //Student* s = new Student("Mike", 1131823, 17);
    //s->Introduce();

    //Student* su = new UndergraduateStudent("Jerry", 1161823, 20, "Computer Science");
    //su->Introduce();

    //Student* sg = new GraduateStudent("John", 1201823, 23, "Artificial Intelligence");
    //sg->Introduce();
}
