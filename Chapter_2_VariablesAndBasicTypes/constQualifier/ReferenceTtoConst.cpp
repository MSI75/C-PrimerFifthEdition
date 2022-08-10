#include <iostream>

int main()
{
    /*

    const int i = 1024;
    const int &ref = i; // ok: both reference and underlying object are const
    // ref = 42; // error: ref is a reference to const
    int ref1 = i; // error: non const reference to a const object
    // std::cout << i << " " << ref << " " << ref1 << std::endl;

    */

    // Initialization and References to const
    /*

    int i = 42;
    const int &ref = i;        // we can bind a const int & to a plain int object
    const int &ref1 = 42;      // ok: ref1 is a reference to const
    const int &ref2 = ref * 2; // ok: ref2 is a reference to const
    // int &ref3 = ref1* 2; // error: ref4 is a plain, non const reference
    std::cout << i << " " << ref << " " << ref1 << " " << ref2 << std::endl;



    double d = 7.5;
    const int &a = d;
    const int temp = d;
    const int &ref = temp;
    const int ci = temp;
    int i = temp;
    std::cout << a << " " << temp << " " << ref << " " << ci << " " << i << std::endl;
    */

    //    A Reference to const May Refer to an Object That Is Not const
    int i = 42;
    int &ref = i;        // ref bound to i
    const int &ref2 = i; // ref2 also bound to i; but cannot be used to change i
    ref = 0;             // r1 is not const; i is now 0
    // ref2 = 0;  // error: r2 is a reference to const
    std::cout << ref << " " << ref2 << " " << ref << std::endl;
}