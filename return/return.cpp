// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

/*
int main()
{
    int search = 101;
    const int num_array[10] = { 1, 7, -5, 101, 598, -90, -50, 10, 11, 45 };
    for (int i = 0; i < 10; ++i)
    {
        if (search == num_array[i])
        {
            std::cout << search << " found." << std::endl;
            return 0;
        }
    }

    std::cout << search << " not found." << std::endl;

    return 0;
}
*/

/*
int main()
{
    int search = 101;
    const int num_array[10] = { 1, 7, -5, 100, 598, -90, -50, 10, 11, 45 };

    int i = 0;
    while (i < 10)
    {
        if (search == num_array[i])
        {
            std::cout << search << " found." << std::endl;
            return 0;
        }

        ++i;
    }

    std::cout << search << " not found." << std::endl;

    return 0;
}
*/
/*
int main()
{
    int search = 101;
    const int num_array[10] = { 1, 7, -5, 100, 598, -90, -50, 10, 11, 45 };

    int i = 0;
    do
    {
        if (search == num_array[i])
        {
            std::cout << search << " found." << std::endl;
            return 0;
        }

        ++i;
    } while (i < 10);

    std::cout << search << " not found." << std::endl;

    return 0;
}
*/

int main()
{
    int n = 0;
    switch (n)
    {
    case 1:
        std::cout << 1 << std::endl;
        return 0;
    case 2:
        std::cout << 2 << std::endl;
        return 0;
    case 3:
        std::cout << 3 << std::endl;
        return 0;
    default:
        std::cout << "Unknown number." << std::endl;
        return 0;
    }

    std::cout << "C++." << std::endl;

    return 0;
}
