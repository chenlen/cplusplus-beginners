// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

/*
int main()
{
    std::cout << "Hello World!\n";
}
*/

int main(int argc, char* argv[])
{
    if (argc >= 2)
    {
        if (strcmp(argv[1], "ls") == 0)
        {
            if (argc == 3)
            {
                if (strcmp(argv[2], "-l") == 0)
                {
                    std::cout << "Hello" << "\n";
                }
                else if (strcmp(argv[2], "-a") == 0)
                {
                    std::cout << "C++" << "\n";
                }
            }
            else
            {
                std::cout << "list all file" << "\n";
            }
        }
    }
    else
    {
        std::cout << "not support command" << "\n";
    }
}
