#include <iostream>

int main()
{
    // const int a = 7;
    // a = 8; // error: attempt to write to const object
    // std::cout << a << std::endl;

    // const int i = get_size(); // ok: initialized at run time
    const int j = 42; // ok: initialized at compile time
    // const int k; // error: k is uninitialized const

    // Initialization and const
    int a = 7;
    const int b = a;
    int c = b;
    std::cout << a << " " << b << " " << c << std::endl;
}