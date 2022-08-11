#include <iostream>

int main()
{
    /*

    const int ci = 0, &cj = ci;
    decltype(ci) x = 0; // x has type const int
    decltype(cj) y = x; // y has type const int& and is bound to x
    // decltype(cj) z;     // error: z is a reference and must be initialized
    std::cout << x << " " << y << std::endl;

    */

    // decltype of an expression can be a reference type
    int i = 42, *p = &i, &r = i;
    decltype(r + 0) b; // ok: addition yields an int; b is an (uninitialized) int
    // decltype(*p) c;    // error: c is int& and must be initialized
    std::cout << r << std::endl;
    std::cout << b << std::endl;
}