// A vector is a class template
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec; // initially empty

    // give ivec some values
    std::vector<int> ivec1(ivec);  // copy elements of ivec into ivec2
    std::vector<int> ivec2 = ivec; // copy elements of ivec into ivec3
    // std::vector<std::string> sv = ivec1; // error: svec holds strings, not ints

    // List Initializing a vector
    std::vector<std::string> articles = {"a", "an", "the"};
    std::vector<std::string> v1{"a", "an", "the"}; // list initialization
    // std::vector<std::string> v2("a", "an", "the"); // error : cannot supply a list of initializers using parentheses

    std::vector<int> ivec(10, -1);             // ten int elements, each initialized to -1
    std::vector<std::string> sve(10, "Hello"); // ten strings; each element is "hi!"

    // Value Initialization
    std::vector<int> ivec(10);        // ten elements, each initialzed to zero
    std::vector<std::string> sve(10); // ten elements , each an empty string

    // std::vector<int> v = 10; // error: must use direct initialization to supply a size

    std::vector<int> v1(10);    // v1 has ten elements with value 0
    std::vector<int> v2{10};    // v2 has one element with value 10
    std::vector<int> v3(10, 1); // v3 has ten elements with value 1
    std::vector<int> v4{10, 1}; // v4 has two elements with values 10 and 1

    std::vector<std::string> v5{"hi"}; // list initialization: v5 has one element
    // std::vector<std::string> v6("hi");     // error: can't construct a vector from a string literal
    std::vector<std::string> v7{10};       // v7 has ten default-initialized elements
    std::vector<std::string> v8(10, "hi"); // v8 has ten elements with value "hi"
    // std::cout << v8[0] << std::endl;
}