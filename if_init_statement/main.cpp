// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

int People()
{
    std::cout << "請問幾人用餐: ";
    int num = 0;
    std::cin >> num;
    return num;
}

bool Birthday()
{
    std::cout << "請問有沒有當月生日: ";
    bool b = false;
    std::cin >> b;
    return b;
}

int main()
{
    const int price = 499;
    if (int num = People(); num < 4)
    {
        std::cout << price * num << "\n";
    }
    else if (bool birthday = Birthday(); num >= 4)
    {
        std::cout << price * (num - 1) << "\n";
    }
    else
    {
        std::cout << price * num << "\n";
    }
}
