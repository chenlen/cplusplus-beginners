// © 2024 C++ 從入門到入土

#include "fibonacci_number.h"

FibonacciNumber::FibonacciNumber()
{}

FibonacciNumber::FibonacciNumber(const FibonacciNumber& rhs) :
    nth_(rhs.nth_),
    cur_fib_num_(rhs.cur_fib_num_),
    pre_fib_num_(rhs.pre_fib_num_)
{}

FibonacciNumber::FibonacciNumber(FibonacciNumber&& rhs) noexcept :
    nth_(rhs.nth_),
    cur_fib_num_(rhs.cur_fib_num_),
    pre_fib_num_(rhs.pre_fib_num_)
{}

FibonacciNumber& FibonacciNumber::operator=(const FibonacciNumber& rhs)
{
    if (this != &rhs)
    {
        nth_ = rhs.nth_;
        cur_fib_num_ = rhs.cur_fib_num_;
        pre_fib_num_ = rhs.pre_fib_num_;
    }

    return *this;
}

FibonacciNumber& FibonacciNumber::operator=(FibonacciNumber&& rhs) noexcept
{
    if (this != &rhs)
    {
        nth_ = rhs.nth_;
        cur_fib_num_ = rhs.cur_fib_num_;
        pre_fib_num_ = rhs.pre_fib_num_;
    }

    return *this;
}

FibonacciNumber::~FibonacciNumber()
{}

long long FibonacciNumber::GetFibonacciNumber() const
{
    return cur_fib_num_;
}

FibonacciNumber& FibonacciNumber::operator++()
{
    // Fib(-1) = 1
    // Fib(0) = 0
    // Fib(1) = 1
    // Fib(n) = Fib(n-1) + Fib(n-2)
    ++nth_;
    cur_fib_num_ += pre_fib_num_;
    pre_fib_num_ = cur_fib_num_ - pre_fib_num_;
    return *this;
}

FibonacciNumber FibonacciNumber::operator++(int)
{
    FibonacciNumber temp = *this;
    ++nth_;
    cur_fib_num_ += pre_fib_num_;
    pre_fib_num_ = cur_fib_num_ - pre_fib_num_;
    return temp;
}

FibonacciNumber& FibonacciNumber::operator--()
{
    --nth_;
    pre_fib_num_ = cur_fib_num_ - pre_fib_num_;
    cur_fib_num_ -= pre_fib_num_;
    return *this;
}

FibonacciNumber FibonacciNumber::operator--(int)
{
    FibonacciNumber temp = *this;
    --nth_;
    pre_fib_num_ = cur_fib_num_ - pre_fib_num_;
    cur_fib_num_ -= pre_fib_num_;
    return temp;
}
