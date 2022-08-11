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
    /*
        int a = 10;
        int &ref = a;
        std::cout << ref << std::endl;
        std::cout << &ref << std::endl;

        // swap(a, b); */

    /*  int a = 5;
    const int b = 6;
    a = 7;
    // b = 7;   */

    // pointer to const
    /*  int a = 5;
     int *p = &a;
     const int *pp = p;
     const int *d = &a;
     // d = 75;
     int i = *d;
     const int ci = *d; */

    // reference to const
    // int a = 75;
    // int &b = a;
    // const int &c = a;
    // int d = c;
    // a = 45;
    // // c = 7;
    // b = 3;
    // int i = c;
    // const int &ci = i;
    // int f = ci;
    // int &ref = c;
    // std::cout << f << std::endl;

    // int a = 5;
    // const int &r = a;

    // a = 10;

    // std::cout << a << std::endl
    //           << r << std::endl;

    int a = 5;
    int *p = &a;
    // const int *pp = p;
    const int b = 7;
   const int *d = &b;
}