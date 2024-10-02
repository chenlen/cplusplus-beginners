// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

int main()
{
    int i = 0;
    do
    {
        std::cout << i << std::endl;
        ++i;
    } while (i < 10);

    return 0;
}
/*
int main()
{
    const int result = 23;
    std::cout << "Guess number [1 ~ 100] higher or lower." << std::endl;

    int n = 0;

    do
    {
        std::cout << "Input an integer: ";
        std::cin >> n;

        if (n > result)
        {
            std::cout << "Higher!" << std::endl;
        }
        else if (n < result)
        {
            std::cout << "Lower!" << std::endl;
        }
        else
        {
            std::cout << "You got it!" << std::endl;
        }
    } while (n != result);

    return 0;
}
*/
