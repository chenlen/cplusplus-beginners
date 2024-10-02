// © 2024 C++ 從入門到入土

#pragma once

class FibonacciNumber
{
public:
    FibonacciNumber();
    FibonacciNumber(const FibonacciNumber& rhs);
    FibonacciNumber(FibonacciNumber&& rhs) noexcept;
    FibonacciNumber& operator=(const FibonacciNumber& rhs);
    FibonacciNumber& operator=(FibonacciNumber&& rhs) noexcept;
    ~FibonacciNumber();

public:
    long long GetFibonacciNumber() const;

    FibonacciNumber& operator++(); // ++n
    FibonacciNumber operator++(int); // n++

    FibonacciNumber& operator--(); // --n
    FibonacciNumber operator--(int); // n--

private:
    long long nth_ = 0;
    long long cur_fib_num_ = 0; // Fib(0) = 0
    long long pre_fib_num_ = 1; // Fib(-1) = 1
};
