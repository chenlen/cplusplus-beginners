// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

using namespace std;

int main()
{
    int int_array[10] = { -7, 1, 2, 13, 4, 25, 6, 7, 38, 9 };
    for (int i = 0; i < 10; ++i)
    {
        cout << int_array[i] << "\n";
    }

    cout << "\n";

    for (int i : int_array)
    {
        cout << i << "\n";
    }
}
