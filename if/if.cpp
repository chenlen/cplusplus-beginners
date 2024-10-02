// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>

int main()
{
    std::cout << "請輸入你的年紀：";

    int age = 0;
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "你已成年。\n";
    }

    return 0;
}

/*
int main()
{
    std::cout << "請輸入你的年紀：";

    int age = 0;
    std::cin >> age;

    if (age >= 18)
    {
        std::cout << "你已成年。\n";
    }
    else
    {
        std::cout << "你未成年。\n";
    }

    return 0;
}
*/
/*
int main()
{
    std::cout << "請輸入你的年紀：";

    int age = 0;
    std::cin >> age;

    if (age >= 20)
    {
        std::cout << "你有投票權。\n";
    }
    else if (age >= 18)
    {
        std::cout << "你已成年。\n";
    }
    else
    {
        std::cout << "你未成年。\n";
    }

    return 0;
}
*/
/*
int main()
{
    std::cout << "請輸入你的年紀：";

    int age = 0;
    std::cin >> age;
    
    if (0 <= age && age < 6)
    {
        std::cout << "你僅可觀看普遍級。\n";
    }
    else if (6 <= age && age < 12)
    {
        std::cout << "保護級，六歲以上未滿十二歲之兒童須父母、師長或成年親友陪伴輔導觀賞。\n";

        do
        {
            std::cout << "請問你有父母、師長或成年親友陪伴嗎(y/n)？";

            char yes = 'n';
            std::cin >> yes;

            if (yes == 'y' || yes == 'Y')
            {
                std::cout << "你可觀看保護級。\n";
                break;
            }
            else if (yes == 'n' || yes == 'N')
            {
                std::cout << "你本次僅可觀看普遍級。保護級須父母、師長或成年親友陪伴輔導才可觀賞。\n";
                break;
            }
        } while (true);
    }
    else if (12 <= age && age < 15)
    {
        std::cout << "你可觀看輔十二級。\n";
    }
    else if (15 <= age && age < 18)
    {
        std::cout << "你可觀看輔十五級。\n";
    }
    else
    {
        std::cout << "你可觀看限制級。\n";
    }

    return 0;
}
*/
