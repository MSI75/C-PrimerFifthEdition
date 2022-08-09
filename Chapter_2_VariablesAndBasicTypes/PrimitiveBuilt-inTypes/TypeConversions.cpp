#include <iostream>

int main()
{
    // boolean to integer, float , char
    /*

    bool b = 42;
    int i = b;
    float f = b;
    char c = b;
    std::cout << " integer = " << i << "\n float = " << f << "\n char = " << c << std::endl;
    //  i -> 1
    //  f -> 1
    //  c -> 0

    */

    // integer to float, char, boolean
    /*
    int i = 42;
    float f = i;
    char c = i;
    bool b = i;
    std::cout << "\n float = " << f << "\n char = " << c << "\n bool = " << b << std::endl;
    //  f -> 42
    //  c -> *
    //  b -> 1
    */

    // float to integer, char, boolean
    /*
    float f = 42.5;
    int i = f;
    char c = f;
    bool b = f;
    std::cout << "\n integer = " << i << "\n char = " << c << "\n bool = " << b << std::endl;
    //  i -> 42
    //  c -> *
    //  b -> 1
    */

    // char to int, float, boolean
    /*
    char c = 'a';
    int i = c;
    float f = c;
    bool b = c;
    std::cout << "\n integer = " << i << "\n float = " << f << "\n bool = " << b << std::endl;
    //  i -> 97
    //  f -> 97
    //  b -> 1
    */

    // int a = 2.5; // 2
    // float a = 2.5; // 2.5
    // float a = 2; // 2
    // double a = 2; // 2
    // double a = 2.3; // 2.3
    // long int a = 5; // 5
    // long long int a = 5; // 5
    // char a = 'a'; // a
    // signed char a = 'a'; // a
    // unsigned char a = 'a'; // a
    // signed char a = -1; //
    // char a = 65; // A
    // signed char a = 65; // A
    // unsigned char a = 65;
    // unsigned char a = 256; // undefined
    // std::cout << a << std::endl;

    /*

    // int i = 42;
    // if (i) //condition will evaluate as true
    // {
    //     std::cout << i << std::endl; // 42
    // }

    // int i = 0;
    // if (i) // condition will evaluate as true
    // {
    //     std::cout << i << std::endl;
    // }

    */

    /*
    // signed s = 10;
    // int i = -42;
    // std::cout << i + i << std::endl; // -84
    // std::cout << i + s << std::endl; // -32

    // unsigned u = 10;
    // int i = -42;
    // std::cout << i + i << std::endl; // -84
    // std::cout << u + i << std::endl; // if 32-bit ints, prints 4294967264

    unsigned u1 = 42, u2 = 10;
    std::cout << u1 - u2 << std::endl; // ok: result is 32
    // unsigned must be sure that the result cannot be negative
    std::cout << u2 - u1 << std::endl; // ok: but the result will wrap around 4294967264


    signed char s1 = 45, s2 = 42;
    std::cout << s1 + s2 << std::endl; // 87

    */

    /*

    // for (unsigned u = 10; u >= 0; --u) // WRONG: u can never be less than 0; the condition will always succeed
     for (unsigned u = 10; u > 0; --u)
     {
         std::cout << u << std::endl;
     }

     */

    unsigned u1 = 10, u2 = 42;
    int i1 = 10, i2 = 42;

    std::cout << u1 + i1 << std::endl; // 20
    std::cout << i2 + u2 << std::endl; // 84
}