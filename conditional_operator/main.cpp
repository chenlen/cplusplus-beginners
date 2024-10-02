// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

int main()
{
    bool b = true;
    if (b)
    {
        cout << "Hello World!\n";
    }
    else
    {
        cout << "C++!\n";
    }

    b ? cout << "Hello World!\n" : cout << "C++!\n";

    int num = 15;
    int n = num > 15 ? 5 : '3';
    cout << n << "\n";
}
