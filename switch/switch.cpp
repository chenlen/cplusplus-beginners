// © 2024 C++ 從入門到入土 https://chenglei.kaik.io/

#include <iostream>
#include <stdio.h>

int main()
{
    unsigned char i = 3;
    switch ((i & 0x0e) % 5)
    {
    case 1:
        printf("%c", '0' + i);
        break;
    case 2:
        printf("%c", '0' + i * i);
    case 3:
        printf("%c", 'a' + i * i);
    default:
        printf("%c", 'z');
    }

    return 0;
}

/*
int main()
{
    int n = 0;
    switch (n)
    {
    case 1:
        std::cout << 1 << std::endl;
        break;
    case 2:
        std::cout << 2 << std::endl;
        break;
    case 3:
        std::cout << 3 << std::endl;
        break;
    default:
        std::cout << "Unknown number." << std::endl;
        break;
    }

    return 0;
}
*/
/*
int main()
{
    char c = 'B';
    switch (c)
    {
    case 'A':
        std::cout << 'A' << std::endl;
        break;
    case 'B':
        std::cout << 'B' << std::endl;
        break;
    case 'C':
        std::cout << 'C' << std::endl;
        break;
    default:
        std::cout << "Unknown char." << std::endl;
        break;
    }

    return 0;
}
*/
/*
int main()
{
    enum class Animal
    {
        kCat,
        kDog,
        kFish
    };

    Animal animal = Animal::kCat;
    switch (animal)
    {
    case Animal::kCat:
        std::cout << "cat." << std::endl;
        break;
    case Animal::kDog:
        std::cout << "dog." << std::endl;
        break;
    case Animal::kFish:
        std::cout << "fish." << std::endl;
        break;
    default:
        std::cout << "Unknown animal." << std::endl;
        break;
    }

    return 0;
}
*/

/*
int main()
{
    //std::cout << "Enter first number: ";
    //double num1 = 0;
    //std::cin >> num1;

    //std::cout << "Enter an operator(+, -, *, /): ";
    //char op;
    //std::cin >> op;
    //
    //std::cout << "Enter second number: ";
    //double num2 = 0;
    //std::cin >> num2;

    double num1 = 0;
    char op;
    double num2 = 0;

    std::cout << "輸入算式(3.5 * 2.1): ";
    std::cin >> num1 >> op >> num2;

    double result = 0;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        std::cout << "Unsupported operation." << std::endl;
        return 0;
    }

    std::cout << "Result: " << result;

    return 0;
}
*/