#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ary;
    ary.push_back(304);
    ary.push_back(262);
    ary.push_back(208);
    for (int i = 0; i < ary.size(); ++i)
    {
        std::cout << ary[i] << ", ";
    }
}

