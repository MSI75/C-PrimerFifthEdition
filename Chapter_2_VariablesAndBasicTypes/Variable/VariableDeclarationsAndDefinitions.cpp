// Variables must be defined exactly once but can be declared many times.
#include <iostream>

int main()
{
    extern int i; // declares but does not define i
    int j;        // declares and defines j

    // extern double pi = 3.1416 // definition
    // It is an error to provide an initializer on an extern inside a function.
}