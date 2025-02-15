// const_cast 是 C++ 的 強制型別轉換運算子
// 專門用來移除 const 或 volatile 限制，以便修改原本不能修改的變數。
// 
// 只能用來：
// 移除 const 屬性
// 移除 volatile 屬性
// 不能轉換不同的型別（只能改變 const 或 volatile，型別必須相同）

#include <iostream>

void ModifyConstValue(const int* cpn)
{
    int* pn = const_cast<int*>(cpn);
    *pn = 10;
}

void ModifyConstValue(const std::string& crs)
{
    std::string& rs = const_cast<std::string&>(crs);
    rs = "test2";
}
void func()
{
    std::cout << "Hello\n";
}

// dynamic_cast_1.cpp
// compile with: /c
//class B {};
//class C : public B {};
//class D : public C {};
//
//void f(D* pd)
//{
//    C* pc = dynamic_cast<C*>(pd);   // ok: C is a direct base class
//    // pc points to C subobject of pd
//    B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class
//    // pb points to B subobject of pd
//}

class A {
public: virtual ~A() {}
};
class B {
public: virtual ~B() {}
};

class Base {};
class Derived : public Base {};

int main()
{
    int num = 10;
    double* dptr = dynamic_cast<double*>(&num);

    //D d;
    //f(&d);

    //Base* basePtr = new Derived();
    //Derived* derivedPtr = dynamic_cast<Derived*>(basePtr); // ❌ 編譯錯誤

    void* rawPtr = reinterpret_cast<void*>(&func); // ✅ 可以轉換
    void (*funcPtr)() = reinterpret_cast<void(*)()>(rawPtr); // ✅ 也可以轉回函式指標
    funcPtr();

    int x = 42;
    double* ptr = reinterpret_cast<double*>(&x); // ❌ 錯誤，可能導致 UB
    std::cout << *ptr << "\n"; // 讀取未定義的記憶體內容

    int n = 5;
    const int* cpn = &n;
    ModifyConstValue(cpn);
    std::cout << "n = " << n << std::endl;

    std::string s = "test";
    ModifyConstValue(s);
    std::cout << "s = " << s << std::endl;
}
