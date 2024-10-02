// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

/*
int main()
{
    int search = 100;
    const int num_array[10] = { 1, 7, -5, 100, 598, -90, -50, 10, 11, 45 };
    for (int i = 0; i < 10; ++i)
    {
        if (search == num_array[i])
        {
            std::cout << search << " found." << std::endl;
            break;
        }
    }

    return 0;
}
*/
/*
int main()
{
    int search = 100;
    const int num_array[10] = { 1, 7, -5, 100, 598, -90, -50, 10, 11, 45 };

    int i = 0;
    while (i < 10)
    {
        if (search == num_array[i])
        {
            std::cout << search << " found." << std::endl;
            break;
        }

        ++i;
    }

    return 0;
}
*/

int main()
{
    int search = 100;
    const int num_array[10] = { 1, 7, -5, 100, 598, -90, -50, 10, 11, 45 };

    int i = 0;
    do
    {
        if (search == num_array[i])
        {
            std::cout << search << " found." << std::endl;
            break;
        }

        ++i;
    } while (i < 10);

    return 0;
}
