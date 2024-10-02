// function.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

void Print(const char* s)
{
    std::cout << s << std::endl;
}

double Plus(double d1, double d2)
{
    return d1 + d2;
}

/*
int Plus(double d1, double d2)
{
    return d1 + d2;
}
*/

double Minus(double d, int n)
{
    return d + n;
}

double Minus(double d, double d2)
{
    return d + d2;
}

void Accumulate(int& n)
{
    ++n;
}

void Accumulate(int* n)
{
    ++n;
}

void Decrease(int* n)
{
    --(*n);
}

int main()
{
    Print("Hello function!");
    double result = Plus(1.5, 3.7);
    double result2 = Minus(8.5, 2);

    int num = 0;
    Accumulate(num);

    int num2 = 0;
    Decrease(&num2);

    return 0;
}

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
