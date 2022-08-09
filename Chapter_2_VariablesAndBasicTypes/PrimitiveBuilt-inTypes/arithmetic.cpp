// primitive two types
// 01. Arithmetic -> characters, integers, boolean values, floating-point numbers
// 02. special type named void -> most commonly as the return type for functions that do not return a value

#include <iostream>

int main()
{
    // int a; // 4 byte
    // long a; // 4
    // long long int a; // 8
    short int a; // 2
    float b;     // 4
    // char c;      // 1
    // signed char c; // 1
    unsigned char c; // 1
    bool d;          // 1
    // double e;           // 8
    long double e; // 12
    std::cout << "Address int = " << a << " Address float = " << b << " Address char = " << c << " Address bool = " << d << " Address double = " << e << std::endl;
    std::cout << "int = " << sizeof(a) << " float = " << sizeof(b) << " char = " << sizeof(c) << " bool = " << sizeof(d) << " double = " << sizeof(e) << std::endl;

    return 0;
}