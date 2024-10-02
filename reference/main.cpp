// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;

int main()
{
    // reference 參考 & 
    //double n = 5;
    //double& rn = n;
    //cout << n << "\n";
    //cout << rn << "\n";

    //n = 8;
    //cout << rn << "\n";

    //rn = 3;
    //cout << n << "\n";
    //cout << rn << "\n";

    //一定要參考到某物，不可以是 null 之類的東西，例如 int& n 不合法
    //int& rn = n;

    //case 1: non-const variable，例如 int n
    //int n = 0;
    //int& rn = n;
    //cout << n << "\n";

    //const int& crn = n;
    //n = 5;
    //cout << n << "\n";
    //cout << crn << "\n";

    //case 2: const variable，例如 const int cn
    //const int cn = 0;
    //int& rn = cn;
    //const int& crn = cn;
    
    //case 3: 常數，例如 0
    //int& rn = 5;
    //const int& crn = 5;
}
