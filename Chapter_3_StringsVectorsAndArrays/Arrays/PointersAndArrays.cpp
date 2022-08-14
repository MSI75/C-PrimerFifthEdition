#include <iostream>

int main()
{
    // std::string num[] = {"one", "two", "three"}; // array of string
    // std::string *p = &num[0];                    // p point to the first element in nams
    // std::string *p1 = num;                       // equivalent to p2 = &nums[0]

    // std::cout << *p1 << std::endl;

    // int ia[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // auto ia1(ia); // ia1 is an int* that points to the first element in ia
    // ia1 = 42;     // error: ia1 is a pointer, and we can't assign an int to a pointer

    // auto ia1(&ia[0]); // now it's clear that ia1 has type int*
    // std::cout << ia1 << std::endl;

    // ia3 is an array of ten ints
    // decltype(ia) ia3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // ia3 = p;    // error: can't assign an int* to an array
    // ia3[4] = i; // ok: assigns the value of i to an element in ia3
    // std::cout << ia3 << std::endl;

    // Pointers Are Iterators
    /* int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p = arr; // p points to the first element in arr
    ++p;          // p points to arr[1]
    std::cout << *p << std::endl; */

    // The Library begin and end Functions
    // int arr[] = {1, 2, 3, 4, 5, 6}; // ia is an array of ten ints
    // int *beg = begin(arr);          // pointer to the first element in ia
    // int *last = end(arr);           // pointer one past the last element in ia

    // Pointer Arithmetic

    // constexpr size_t sz = 5;
    // int arr[sz] = {1, 2, 3, 4, 5};
    // int *ip = arr;     // equivalent to int *ip = &arr[0]
    // int *ip2 = ip + 4; // ip2 points to arr[4], the last element in ar

    // // ok: arr is converted to a pointer to its first element; p points one past the end of arr
    // int *p = arr + sz;  // use caution -- do not dereference!
    // int *p2 = arr + 10; // error: arr has only 5 elements; p2 has undefined value

    // auto n = end(arr) - begin(arr); // n is 5, the number of elements in arr

    // int *b = arr, *e = arr + sz;
    // while (b < e)
    // {
    //     // use *b
    //     ++b;
    // }

    // int ia[] = {0, 2, 4, 6, 18}; // array with 5 elements of type int
    // int last = *(ia + 4);        // ok: initializes last to 18, the value of ia[4]

    int ia[] = {0, 2, 4, 6, 8}; // array with 5 elements of type int

    // int i = ia[2]; // ia is converted to a pointer to the first element in ia
    //                // ia[2] fetches the element to which (ia + 2) points
    // int *p = ia;   // p points to the first element in ia
    // i = *(p + 2);  // equivalent to i = ia[2]

    int *p = &ia[2]; // p points to the element indexed by 2
    int j = p[1];    // p[1] is equivalent to *(p + 1),
                     // p[1] is the same element as ia[3]
    int k = p[-2];   // p[-2] is the same element as ia[0]
    std::cout << *p << std::endl;
}