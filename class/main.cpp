// © 2024 C++ 從入門到入土

#include "dynamic_array.h"
#include <iostream>

int main()
{
    DynamicIntArray arr;
    for (int i = 0; i < 10; ++i)
    {
        arr.PushBack(i);
    }
}
