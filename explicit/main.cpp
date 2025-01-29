#include <iostream>
#include "explicit.h"

void Bar(const String& s)
{
    std::cout << s.GetValue() << "\n";
}

int main()
{
    Bar(String(1));
    return 0;
}
