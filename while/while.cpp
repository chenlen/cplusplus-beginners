// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

int main()
{
    int i = 0;
    while (i < 10)
    {
        std::cout << i << std::endl;
        ++i;
    }

    return 0;
}

/*
int main()
{
    std::cout << "Enter two integers(separated by space): ";

    int a = 0;
    int b = 0;
    std::cin >> a >> b;

    // 計算最大公因數
    while (b != 0)
    {
        std::cout << "a = " << a << ", b = " << b << std::endl; // 印出計算過程

        int t = b;
        b = a % b;
        a = t;
    }

    std::cout << "a = " << a << ", b = " << b << std::endl; // 印出計算過程

    std::cout << "GCD = " << abs(a);
}
*/
