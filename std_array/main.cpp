// © 2024 C++ 從入門到入土

#include <stdio.h>
#include <array>

int ya(int* arr, int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        k = k + *(arr + i);
    }

    return k;
}

int ya2(const std::array<int, 10>& arr)
{
    int k = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        k = k + arr[i];
    }

    return k;
}

int main()
{
    //int data[10];
    std::array<int, 10>  data;
    for (int i = 0; i < 10; i++)
    {
        data[i] = i + 1;
    }

    printf("%d\n", ya2(data));
}
