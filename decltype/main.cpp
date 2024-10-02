// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

struct Book
{
    int ISBN = 1234;
    int price = 350;
};

int main()
{
    int n = 5;
    const char* s = "C++";
    Book book;

    decltype(n) num;
    decltype(s) name;
    decltype(book) ebook;
}
