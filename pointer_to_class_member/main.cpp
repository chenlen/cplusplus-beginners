// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

class Foo
{
public:
    int Func() const
    {
        return n + 5;
    }

    int n = 0;
};

int main()
{
    int Foo::* pdm = &Foo::n;
    Foo obj;
    obj.*pdm = 8;
    std::cout << obj.*pdm << "\n";

    int (Foo::*pmf)() const = &Foo::Func;
    Foo* pobj = &obj;
    std::cout << (pobj->*pmf)() << "\n";
}
