#include <iostream>

int main()
{
    int a = 5;
    const int b = 7;
    const unsigned c = 75;
    int arr[10]; // array of ten ints
    int *p[a];   // array of a pointers to int
    // std::string sad[b]; // array of b ints
    std::string bad[c]; // array of b ints

    // std::cout << bad << std::endl;

    // Explicitly Initializing Array Elements
    const unsigned sz = 3;
    int ia1[sz] = {0, 1, 2};           // array of three ints with values 0, 1, 2
    int a2[] = {0, 1, 2};              // an array of dimension 3
    int a3[5] = {0, 1, 2};             // equivalent to a3[] = {0, 1, 2, 0, 0}
    std::string a4[3] = {"hi", "bye"}; // same as a4[] = {"hi", "bye", ""}
    // int a5[2] = {0, 1, 2};             // error: too many initializers

    char a1[] = {'C', '+', '+'};       // list initialization, no null
    char a2[] = {'C', '+', '+', '\0'}; // list initialization, explicit null
    char a3[] = "C++";                 // null terminator added automatically
    // const char a4[6] ="Daniel";       // error: no space for the null!

    // No Copy or Assignment
    int a[] = {0, 1, 2}; // array of three ints
    // int a2[] = a;        // error: cannot initialize one array with another
    // a2 = a;              // error: cannot assign one array to another

    // Understanding Complicated Array Declarations
    int *ptrs[10]; // ptrs is an array of ten pointers to int
    // int &refs[10] = /* ? */; // error: no arrays of references
    int(*PArray)[10] = &arr; // PArray points to an array of ten ints C++ Primer, Fifth Edition
    int(&arrRef)[10] = arr;  // arrRef refers to an array of ten ints

    int *(&array)[10] = ptrs; // array is a reference to an array of ten pointers
}