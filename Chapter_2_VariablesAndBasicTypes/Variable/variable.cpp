#include <iostream>

int main()
{
    // int i = {7};
    // int i{2};
    // std::cout << i << std::endl;

    // double price = 109.99, discount = price * 0.16;
    // std::cout << discount << std::endl;

    // Initialization
    /*
    long double ld = 3.141516;
    int a{ld}, b = {ld}; // error: narrowing conversion required
    std::cout << a << b << std::endl;
    int c(ld), d = ld; // ok: but value will be truncated
    std::cout << c << d << std::endl;
    */

    int i = 75.5;
    int a{i}, b = {i}, c(i), d = i;
    std::cout << a << " " << b << " " << c << " " << d << std::endl;
}