// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

int main()
{
    int int_array[7] = { 23, 18, -7, 1, 0, 5, 99 };
    for (int i = 0; i < 7; ++i)
    {
        cout << &int_array[i] << ": " << int_array[i] << "\n";
    }

    cout << "\n";

    for (int i = 0; i < 7; ++i)
    {
        cout << int_array + i << ": " << *(int_array + i) << "\n";
    }
}

