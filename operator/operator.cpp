﻿#include <iostream>

using namespace std;

int main()
{
    // 位元 bit = [0, 1]
    // short 2 bytes = 16 bits
    // 0: 00000000 00000000 = 0
    // 1: 00000000 00000001 = 2^0 * 1 = 1
    // 2: 00000000 00000010 = 2^0 * 0 + 2^1 * 1 = 0 + 2 = 2
    // 3: 00000000 00000011 = 2^0 * 1 + 2^1 * 1 = 1 + 2 = 3
    //17: 00000000 00010001 = 2^0 * 1 + 2^4 * 1 = 1 + 16 = 17
    // 1: 00000000 00000001 取 NOT ~ (一補數)
    //    11111111 11111110 加 1 (二補數)
    //-1: 11111111 11111111 二補數的結果
    // 2: 00000000 00000010 取 NOT ~
    //    11111111 11111101 加 1
    //-2: 11111111 11111110 
    // 3: 00000000 00000011 取 NOT ~
    //    11111111 11111100 加 1
    //-3: 11111111 11111101
    // 32768: 10000000 00000000 取 NOT ~
    //        01111111 11111111 加 1
    //-32768: 10000000 00000000

    int z1 = 1;
    int z2 = -z1;
    int z3 = +z2;

    int a = 3;
    int b = 4;
    int c = a + b;
    c = a - b;
    c = a * b;
    c = a / b;
    c = a % b;

    int x = 0;
    int y = ++x;
    y = x++;

    x = 0;
    y = --x;
    y = x--;

    int i = 5;
    i += 1;
    i -= 2;
    i *= 3;
    i /= 4;
    i %= 5;

    double d = 5;
    d += 1;
    d -= 2;
    d *= 3;
    d /= 4;
    //d %= 5;

    int n = 2;
    int n2 = n << 1;
    int n3 = n >> 1;

    n <<= 1;
    n >>= 1;

    int m = 0;
    m = ~m;

    int m2 = 0 & 0;
    m2 = 0 & 1;
    m2 = 1 & 0;
    m2 = 1 & 1;

    int m3 = 0 | 0;
    m3 = 0 | 1;
    m3 = 1 | 0;
    m3 = 1 | 1;

    int m4 = 0 ^ 0;
    m4 = 0 ^ 1;
    m4 = 1 ^ 0;
    m4 = 1 ^ 1;

    m &= 1;
    m |= 1;
    m ^= 1;
}
