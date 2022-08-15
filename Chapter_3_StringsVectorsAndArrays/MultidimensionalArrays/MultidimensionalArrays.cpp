#include <iostream>

int main()
{
    // int ia[3][4]; // array of size 3; each element is an array of ints of size 4
    // // array of size 10; each element is a 20-element array whose elements are arrays of 30 ints
    // int arr[10][20][30] = {0}; // initialize all elements to 0

    // std::cout << arr << std::endl;

    // Initializing the Elements of a Multidimensional Array
    int ia[3][4] = {
        // three elements; each element is an array of size 4
        {0, 1, 2, 3},  // initializers for the row indexed by 0
        {4, 5, 6, 7},  // initializers for the row indexed by 1
        {8, 9, 10, 11} // initializers for the row indexed by 2
    };

    // equivalent initialization without the optional nested braces for each row
    // int ia[3][4] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

    // explicitly initialize only element 0 in each row
    // int ia[3][4] = {{0}, {4}, {8}};

    // explicitly initialize row 0; the remaining elements are value initialized
    // int ix[3][4] = {0, 3, 6, 9};

    // size_t cnt = 0;
    // for (auto &row : ia) // for every element in the outer array
    //     for (auto &col : row)
    //     {              // for every element in the inner array
    //         col = cnt; // give this element the next value
    //         ++cnt;     // increment cnt
    //     }
    // std::cout << << std::endl;

    int ia[3][4];    // array of size 3; each element is an array of ints of size 4
    int(*p)[4] = ia; // p points to an array of four ints
    p = &ia[2];      // p now points to the last element in ia
    std::cout << p << std::endl;
}