// BasicType.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
    bool b1 = false;
    bool b2 = true;

    auto b = typeid(char) == typeid(signed char);

    char c = 'a';
    char8_t c8 = u8'a'; // 不常用
    char16_t c16 = u'a'; // 不常用
    char32_t c32 = U'a'; // 不常用
    wchar_t wc = L'a'; // 不常用

    b = typeid(short) == typeid(signed short);

    short s = 0;
    unsigned short us = 0;

    int i = 0;
    unsigned int ui = 0u;

    long l = 0l;
    unsigned long ul = 0ul;

    long long ll = 0ll;
    unsigned long long ull = 0ull;

    float f = 0.0f;
    double d = 0.0;
    long double ld = 0.0l;

    //

    std::cout << std::numeric_limits<bool>::lowest() << " <= bool <= " << std::numeric_limits<bool>::max() << "\n\n";

    std::cout << (int)std::numeric_limits<char>::lowest() << " <= char <= " << (int)std::numeric_limits<char>::max() << "\n";
    std::cout << (int)std::numeric_limits<signed char>::lowest() << " <= signed char <= " << (int)std::numeric_limits<signed char>::max() << "\n";
    std::cout << (int)std::numeric_limits<unsigned char>::lowest() << " <= unsigned char <= " << (int)std::numeric_limits<unsigned char>::max() << "\n\n";

    std::cout << (int)std::numeric_limits<char8_t>::lowest() << " <= char8_t <= " << (int)std::numeric_limits<char8_t>::max() << "\n";
    std::cout << (int)std::numeric_limits<char16_t>::lowest() << " <= char16_t <= " << (int)std::numeric_limits<char16_t>::max() << "\n";
    std::cout << (int)std::numeric_limits<char32_t>::lowest() << " <= char32_t <= " << (int)std::numeric_limits<char32_t>::max() << "\n";
    std::cout << (int)std::numeric_limits<wchar_t>::lowest() << " <= wchar_t <= " << (int)std::numeric_limits<wchar_t>::max() << "\n\n";

    std::cout << std::numeric_limits<short>::lowest() << " <= short <= " << std::numeric_limits<short>::max() << "\n";
    std::cout << std::numeric_limits<unsigned short>::lowest() << " <= unsigned short <= " << std::numeric_limits<unsigned short>::max() << "\n\n";

    std::cout << std::numeric_limits<int>::lowest() << " <= int <= " << std::numeric_limits<int>::max() << "\n";
    std::cout << std::numeric_limits<unsigned int>::lowest() << " <= unsigned int <= " << std::numeric_limits<unsigned int>::max() << "\n\n";

    std::cout << std::numeric_limits<long>::lowest() << " <= long <= " << std::numeric_limits<long>::max() << "\n";
    std::cout << std::numeric_limits<unsigned long>::lowest() << " <= unsigned long <= " << std::numeric_limits<unsigned long>::max() << "\n\n";

    std::cout << std::numeric_limits<long long>::lowest() << " <= long long <= " << std::numeric_limits<long long>::max() << "\n";
    std::cout << std::numeric_limits<unsigned long long>::lowest() << " <= unsigned long long <= " << std::numeric_limits<unsigned long long>::max() << "\n\n";

    std::cout << std::numeric_limits<float>::lowest() << " <= float <= " << std::numeric_limits<float>::max() << "\n";
    std::cout << std::numeric_limits<double>::lowest() << " <= double <= " << std::numeric_limits<double>::max() << "\n";
    std::cout << std::numeric_limits<long double>::lowest() << " <= long double <= " << std::numeric_limits<long double>::max() << "\n\n";

    return 0;
}
