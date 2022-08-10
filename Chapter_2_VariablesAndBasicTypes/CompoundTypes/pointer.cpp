#include <iostream>

// signal pointer
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
    std::cout << "a = " << *a << " "
              << "b = " << *b << std::endl;
}

// double pointer
void swapP(int **a, int **b)
{
    int temp = **a;
    **a = **b;
    **b = temp;
    std::cout << "a = " << **a << " "
              << "b = " << **b << std::endl;
}

int main()
{
    // int a = 7;
    // int *p = &a;
    // // double pointer
    // int **pp = &p;

    // std::cout << "a = " << a << " "
    //           << " p = " << p << " "
    //           << " *p = " << *p << " "
    //           << " &a = " << &a << " "
    //           << " pp = " << pp << " "
    //           << " **pp = " << **pp << " "
    //           << " &p = " << &p << std::endl;

    int a = 10, b = 20;
    int *p = &a, *q = &b;
    std::cout << "a = " << a << " "
              << "b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << " "
              << "b = " << b << std::endl;

    std::cout << "a = " << *p << " "
              << "b = " << *q << std::endl;
    swapP(&p, &q);
    std::cout << "a = " << *p << " "
              << "b = " << *q << std::endl;
}