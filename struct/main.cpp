// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

struct Book
{
    int ISBN = 1234;
    int price = 350;
};

struct Student : Book
{
    const char* name;
    int id;
    int age;
    Book book;
};

int main()
{
    const char* student_name = "Jerry";
    int student_id = 1131824;
    int student_age = 18;

    const char* student2_name = "Mike";
    int student2_id = 1131825;
    int student2_age = 19;

    Student student;
    student.name = "Jerry";
    student.id = 1131824;
    student.age = 18;
    student.book.ISBN = 2468;
    student.book.price = 400;

    cout << student.name << "\n";
    cout << student.id << "\n";
    cout << student.age << "\n";
    cout << student.book.ISBN << "\n";
    cout << student.book.price << "\n";

    Student student2;
    student.name = "Mike";
    student.id = 1131825;
    student.age = 19;
}
