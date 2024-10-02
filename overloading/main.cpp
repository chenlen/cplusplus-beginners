// © 2024 C++ 從入門到入土

#include <iostream>
#include "fibonacci_number.h"

int main()
{
    FibonacciNumber fn;
    int i = 0;
    for (; i < 10; ++i, ++fn)
    {
        std::cout << fn.GetFibonacciNumber() << " ";
    }

    std::cout << "\n";

    for (; i >= 0; --i, --fn)
    {
        std::cout << fn.GetFibonacciNumber() << " ";
    }

    std::cout << "\n";
}
