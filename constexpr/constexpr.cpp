// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

constexpr int Func(int b)
{
    int c = 0;
    return b + c;
}

int main()
{
    constexpr int a = 5;
    constexpr int d = Func(a);

    //int a = 0;
    //constexpr int b = 0;
    //constexpr int c = a + 1;
    //constexpr int d = b + 1;
}
