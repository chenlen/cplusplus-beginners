#include <iostream>

void func()
{}

int main()
{
    std::cout << "sizeof(bool) = " << sizeof(bool) << std::endl;

    std::cout << "sizeof(char) = " << sizeof(char) << std::endl;
    std::cout << "sizeof(char8_t) = " << sizeof(char8_t) << std::endl;
    std::cout << "sizeof(char16_t) = " << sizeof(char16_t) << std::endl;
    std::cout << "sizeof(char32_t) = " << sizeof(char32_t) << std::endl;
    std::cout << "sizeof(wchar_t) = " << sizeof(wchar_t) << std::endl;

    std::cout << "sizeof(short) = " << sizeof(short) << std::endl;
    std::cout << "sizeof(int) = " << sizeof(int) << std::endl;
    std::cout << "sizeof(long) = " << sizeof(long) << std::endl;
    std::cout << "sizeof(long long) = " << sizeof(long long) << std::endl;

    std::cout << "sizeof(float) = " << sizeof(float) << std::endl;
    std::cout << "sizeof(double) = " << sizeof(double) << std::endl;

    /////////
    std::cout << "sizeof(bool*) = " << sizeof(bool*) << std::endl;
    std::cout << "sizeof(char*) = " << sizeof(char*) << std::endl;
    std::cout << "sizeof(int*) = " << sizeof(int*) << std::endl;
    std::cout << "sizeof(double*) = " << sizeof(double*) << std::endl;
    std::cout << "sizeof(void*) = " << sizeof(void*) << std::endl;
/*
    /////////
    char char_array[5] = {};
    std::cout << "sizeof(char_array) = " << sizeof(char_array) << std::endl;

    int int_array[10] = {};
    std::cout << "sizeof(int_array) = " << sizeof(int_array) << std::endl;

    std::cout << "sizeof(int[8]) = " << sizeof(int[8]) << std::endl;

    /////////
    int i = 0;
    std::cout << "sizeof(i) = " << sizeof(i) << std::endl;

    double d = 0;
    std::cout << "sizeof(d) = " << sizeof(d) << std::endl;

    float f = 0;
    std::cout << "sizeof(f) = " << sizeof(f) << std::endl;

    std::cout << "sizeof(i * d * f) = " << sizeof(i * d * f) << std::endl;

    /////////
    std::cout << "sizeof(func) = " << sizeof(&func) << std::endl;

    auto func_pointer = func;
    std::cout << "sizeof(func) = " << sizeof(func_pointer) << std::endl;
    */
    return 0;
}
