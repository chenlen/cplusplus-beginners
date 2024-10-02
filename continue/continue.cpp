// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        std::cout << i << ", ";
    }

    return 0;
}

/*
int main()
{
    int i = 0;
    while (i < 10)
    {
        if (i % 2 != 0)
        {
            ++i;
            continue;
        }

        std::cout << i << ", ";

        ++i;
    }

    return 0;
}
*/
/*
int main()
{
    int i = 0;
    do
    {
        if (i % 2 != 0)
        {
            ++i;
            continue;
        }

        std::cout << i << ", ";

        ++i;
    } while (i < 10);

    return 0;
}
*/
