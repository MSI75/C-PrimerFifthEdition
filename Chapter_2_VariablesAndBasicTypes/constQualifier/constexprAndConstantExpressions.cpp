#include <iostream>

int main()
{
    // const int max_files = 20;        // max_files is a constant expression
    // const int limit = max_files + 1; // limit is a constant expression
    // int staff_size = 27;             // staff_size is not a constant expression
    // // const int sz = get_size();       // sz is not a constant expression
    // std::cout << max_files << " " << limit << " " << staff_size << std::endl;

    // constexpr Variables
    constexpr int mf = 20;        // 20 is a constant expression
    constexpr int limit = mf + 1; // mf + 1 is a constant expression
    // constexpr int sz = size();    // ok only if size is a constexpr function
    std::cout << mf << " " << limit << std::endl;

    constexpr int *np = nullptr; // np is a constant pointer to int that is null
    int j = 0;
    constexpr int i = 42; // type of i is const int

    // // i and j must be defined outside any function

    // constexpr const int *p = &i; // p is a constant pointer to the const int i
    // constexpr int *p1 = &j;      // p1 is a constant pointer to the int j
    std::cout << np << " " << j << " " << i << std::endl;
}