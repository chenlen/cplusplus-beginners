// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

int main()
{
    auto i = 5;
    auto d = 3.5;
    auto b = true;
    float f = 3.5;
    auto l = 10L;
    auto s = "C++";

    int arr[2][3][4] = {0};
    int(*p)[3][4] = arr;

    auto p2 = arr;
}
