#include <iostream>

void swap(int &a, int &b)
{
    int tem;
    tem = a;
    a = b;
    b = tem;
    std::cout << &a << &b << std::endl;
}

int main()
{
    // int a = 5;
    // int &ref = a; // reference constant and only single line
    // int b = 10;
    // // &ref = b; // error
    // std::cout << ref << std::endl;
    /*
        int a = 5;
        int *p = &a;
        int **pp = &p;

        // int &ref1 = p;

        std::cout << p << std::endl;
        std::cout << *p << std::endl;
        std::cout << pp << std::endl;
        std::cout << *pp << std::endl;

        int b = 5;
        int &ref = b;
        std::cout << ref << std::endl;
        std::cout << &ref << std::endl; */

    int a = 10;
    int &ref = a;
    std::cout << ref << std::endl;
    std::cout << &ref << std::endl;

    // swap(a, b);
}