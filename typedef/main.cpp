// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

typedef int ISBN;

struct Book
{
    ISBN isbn = 1234;
    int price = 350;
};

typedef Book eBook;

int main()
{
    eBook book;
    cout << book.isbn << "\n";
    cout << book.price << "\n";

    if (book.isbn == 1234)
    {
        cout << book.price << "\n";
    }
}
