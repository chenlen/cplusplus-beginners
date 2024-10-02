// © 2024 C++ 從入門到入土 https://chenlen.com

#include <iostream>

using namespace std;
 
int main()
{
    int D[2][3][4] = { 1,2,3,4,
                       5,6,7,8,
                       9,10,11,12,
                       13,14,15,16,
                       17,18,19,20,
                       21,22,23,24 };

    auto t = D[1];
    cout << *t << "\n";
    cout << *(t + 1) << "\n";
    cout << *(t + 2) << "\n";

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 4; ++k)
            {
                cout << &D[i][j][k] << ": " << D[i][j][k] << "\n";
            }
        }
    }
}

//int main()
//{
//    int D[2][3] = { 1,2,3,4,5,6 };
//    for (int i = 0; i < 2; ++i)
//    {
//        for (int j = 0; j < 3; ++j)
//        {
//            cout << "D[" << i << "][" << j << "] = " << &D[i][j] << ": " << D[i][j] << "\n";
//        }
//    }
//
//    auto t = D;
//
//    cout << D << "\n";
//    cout << D + 1 << "\n";
//    cout << *(D + 1) << "\n";
//    cout << **(D + 1) << "\n";
//
//    int* t1 = D[0];
//    cout << t1 << ": " << *t1 << "\n";
//    cout << t1 + 2 << ": " << *(t1 + 2) << "\n";
//
//    int* t2 = D[1];
//    cout << *(t2 + 2) << "\n";
//
//    int n = D[1][2];
//    cout << n << "\n";
//}

//class X
//{
//public:
//    int a;
//    void f(int b) {
//        cout << b << endl;
//    }
//};
//int main()
//{
//    int X::* ptiptr = &X::a;
//    void (X:: * ptfptr)(int) = &X::f;
//    X xobject;
//    xobject.*ptiptr = 10;
//    cout << xobject.*ptiptr << endl;
//    (xobject.*ptfptr) (20);
//}

//#include <stdio.h>
//
//int g;
//
//int main()
//{
//    cout << g << "\n\n";
//
//    int i = 0;
//    cout << i++ + ++i << "\n\n";
//
//    int arr[] = { 1,2,3,4,5 };
//    int* ptr = arr;
//    *(ptr++) += 1;
//
//    cout << *ptr << "\n\n";
//
//    cout << *(++ptr) << "\n\n";
//
//    for (int i = 0; i < 5; ++i)
//    {
//        cout << arr[i] << "\n";
//    }
//}
