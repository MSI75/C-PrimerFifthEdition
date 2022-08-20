#include <iostream>

// int fact(int n)
// {
//     int s = 1; // local variable to hold the result as we calculate it
//     while (n > 1)
//     {
//         s *= n--; // assign s*n to ret and decrement val
//     }
//     return s; // return the result
// }

// size_t count_call()
// {
//     static size_t ctr = 1; // value will persist across calls
//     return ctr;
// }
void error_msg(std::initializer_list<std::string> il)
{
    // std::cout << e.msg() << ": ";
    for (const auto &elem : il)
        std::cout << elem << " ";
    std::cout << std::endl;
}

int main()
{
    // int n = 5;
    // std::cout << fact(n) << std::endl;

    // Parameters and Arguments
    // fact("hello"); // error: wrong argument type
    // fact(); // error: too few arguments
    // fact(42, 10, 0); // error: too many arguments
    // fact(3.14); // ok: argument is converted to int

    // Function Parameter List
    // void f1(){ /* ... */ } // implicit void parameter list
    // void f2(void){ /* ... */ } // explicit void parameter list
    // int f3(int v1, v2) { /* ... */ } // error
    // int f4(int v1, int v2) { /* ... */ } // ok

    // for (size_t i = 0; i != 10; ++i)
    // {
    //     std::cout << count_call() << std::endl;
    // }

    // Function Declarations

    return 0;
}