#include <iostream>

int main()
{
    typedef double wages;   // wages is a synonym for double
    typedef wages base, *p; // base is a synonym for double, p for double*

    /*

    // auto
     auto a = 7;
     auto *b = &a;
     std::cout << *b << std::endl;

    */

    // Compound Types, const, and auto
    int i = 0, &r = i;
    auto a = r; // a is an int (r is an alias for i, which has type int)
    const int ci = i, &cr = ci;
    auto b = ci;  // b is an int (top-level const in ci is dropped)
    auto c = cr;  // c is an int (cr is an alias for ci whose const is top-level)
    auto d = &i;  // d is an int*(& of an int object is int*)
    auto e = &ci; // e is const int*(& of a const object is low-level const)

    std::cout << a << " " << ci << " " << b << " " << c << " " << d << " " << e << std::endl;
}