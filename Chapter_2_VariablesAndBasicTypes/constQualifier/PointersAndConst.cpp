#include <iostream>

int main()
{
    /*

    const double cd = 7.75; // cd is const; its value may not be changed
    // double *pi = &cd;       // error: pi is a plain pointer
    const double *p = &cd; // ok: p may point to a double that is const
    // *p = 42;  // error: cannot assign to *cptr
    std::cout << *p << std::endl;

    double d = 7.5; // d is a double; its value can be changed
    // p = d; // ok: but can't change d through p
    std::cout << d << std::endl;

    */

    // const Pointers
    int errNumb = 0;
    int *const curErr = &errNumb; // curErr will always point to errNumb
    const double pi = 3.14159;
    const double *const pip = &pi; // pip is a const pointer to a const object
    std::cout << curErr << " " << *curErr << " " << pi << " " << pip << " " << *pip << std::endl;

    // *pip = 2.72; // error: pip is a pointer to const
    // if the object to which curErr points (i.e., errNumb) is nonzero
    if (*curErr)
    {
        // errorHandler();
        *curErr = 0; // ok: reset the value of the object to which curErr is bound
    }
}