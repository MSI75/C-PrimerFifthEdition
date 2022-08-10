#include <iostream>

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << " " << b << std::endl;
}

int main()
{
    // int i = 75;
    // int &ref1 = i; // ref1 refers to (is another name for) i
    // // int &ref2; // error: a reference must be initialized
    // std::cout << &ref1 << " " << i << std::endl;
    // i = 2;
    // int ii = i;
    // std::cout << ii << std::endl;

    // int i = 1024, i2 = 2048; // i and i2 are both ints
    // int &r = i, r2 = i2;     // r is a reference bound to i; r2 is an int
    // int i3 = 1024, &ri = i3; // i3 is an int; ri is a reference bound to i3
    // int &r3 = i3, &r4 = i2;  // both r3 and r4 are references

    // std::cout << r << std::endl;
    // std::cout << r2 << std::endl;
    // std::cout << ri << std::endl;
    // std::cout << r3 << std::endl;
    // std::cout << r4 << std::endl;

    int a = 10, b = 20;
    std::cout << a << " " << b << std::endl;
    swap(a, b);
    std::cout << a << " " << b << std::endl;
}