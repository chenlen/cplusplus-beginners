// const.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

int main()
{
    int n = 0;
    int n2 = 10;

    const int cn = 5;
    //cn = 6;

    const int* p1 = &n;
    p1 = &n2;
    //*p1 = 2;

    int* const p2 = &n;
    //int* const p2 = &cn;
    //p2 = &n2;
    *p2 = 100;

    const int* const p3 = &n;
    //p3 = &n2;
    //*p3 = 1;

    return 0;
}

/*
int main()
{
    int n = 0;

    const int* p = &n;
    int const* p2 = &n;
    int* const p3 = &n;

    int n2 = 0;
    p = &n2; // ok
    //*p = 1; // oh no!

    p2 = &n2; // ok
    //*p2 = 1; // oh no!

    //p3 = &n2; // oh no!
    *p3 = 1; // ok

    const int* const p4 = &n;
    //p4 = &n2;
    //*p4 = 1;

    return 0;
}
*/

// 執行程式: Ctrl + F5 或 [偵錯] > [啟動但不偵錯] 功能表
// 偵錯程式: F5 或 [偵錯] > [啟動偵錯] 功能表

// 開始使用的提示: 
//   1. 使用 [方案總管] 視窗，新增/管理檔案
//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
