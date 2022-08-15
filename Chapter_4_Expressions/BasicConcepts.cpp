#include <iostream>

int main()
{
    // int arr[] = {1, 2, 3, 4, 5, 75}; // array with five elements of type int
    // int p = *(arr + 5);// initializes last to 8, the value of ia [4]
    // p = *arr + 4; // last = 4, equivalent to ia [0] + 4

    // int *p = arr;

    // std::cout << p << std::endl;

    // int a, b;
    // std::cin >> a >> b;
    // std::cout << a << " " << b << std::endl;

    // Order of Evaluation
    // int i = 0;
    // std::cout << i << " " << i++ << std::endl; // 0  0
    // std::cout << i << " " << ++i << std::endl; // 1 2

    // int i = 1024;
    // int ii = -i; // i is -1024

    // bool b = true;
    // bool bb = -b; // b2 is true!

    // std::cout << ii << " " << bb << std::endl;

    // short short_value = 32767;
    // short_value += 1;

    // int a = 21 / 6; // a is 3; result is truncated; remainder is discarded
    // int b = 21 / 7; // b is 3; no remainder; result is an integral value

    // int i = 42;
    // double di = 3.1416;
    // int d = i / di; // 13
    // int d = i % di; // error: floating-point operand

    // std::cout << d << "\t" << std::endl;

    // note s as a reference to const; the elements aren't copied and can't be changed
    // std::string s = "Hello World";
    // int *s;

    // Assignment operator
    // += -= *= /= %= // arithmetic operators
    // <<= >>= &= ^= |= // bitwise operators;

    // Increment and Decrement Operators
    //     int i = 0, j;
    // j = ++i; // j = 1, i = 1: prefix yields the incremented value
    // j = i++; // j = 1, i = 2: postfix yields the un-incremented value

    // The Member Access Operators
    // std::string s1 = "a string", *p = &s1;
    // auto n = s1.size(); // run the size member of the string s1
    // n = (*p).size();    // run size on the object to which p points
    // n = p->size();      // equivalent to (*p).size()
    // std::cout << n << std::endl;

    // The Conditional Operator
    int grade = 30;
    std::string finalGrade = (grade < 60) ? "fail" : "pass";
    std::cout << finalGrade << std::endl;

    // Nesting Conditional Operations
    std::cout << ((grade < 60) ? "fail" : "pass"); // prints pass or fail
    std::cout << (grade < 60) ? "fail" : "pass";   // prints 1 or 0!
    // std::cout << grade < 60 ? "fail" : "pass";     // error: compares cout to 60

    // type conversion
    int i;
    const int &j = i;  // convert a nonconst to a reference to const int
    const int *p = &i; // convert address of a nonconst to the address of a const
    // int &r = j, *q = p; // error: conversion from const to nonconst not allowed
}