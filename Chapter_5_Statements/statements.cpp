#include <iostream>

int main()
{
    // int n, sought = 75;
    // while (std::cin >> n && n != sought)
    // {
    //     std::cout << "Matching " << std::endl;
    // }
    // std::cout << "Not Matching !" << std::endl;

    int a = 7, b = 5, c;
    // c = a + b;
    ; // ok: second semicolon is a superfluous null statement
    std::cout << c << std::endl;

    // disaster: extra semicolon: loop body is this null statement
    while (b < a)
        ; // the while body is the empty statement
    b++;  // increment is not part of the loop
    std::cout << a << std::endl;
}