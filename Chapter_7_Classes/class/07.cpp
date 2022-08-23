// Write a program to print the area of a rectangle by creating a class named 'Area'
// taking the values of its length and breadth as parameters of its constructor and having a
// function named 'returnArea' which returns the area of the rectangle.
// Length and breadth of the rectangle are entered through keyboard.

// #include <iostream>

// class Area
// {
//     int length = 5, breadth = 9;

// public:
//     Area(int l, int b)
//     {
//         length = l;
//         breadth = b;
//     }
//     int returnArea()
//     {
//         return length * breadth;
//     }
// };

// int main()
// {
//     Area ar(7, 5);
//     std::cout << "Area = " << ar.returnArea() << std::endl;
//     return 0;
// }

#include <iostream>

class Area
{
    int length, breadth;

public:
    Area()
    {
        std::cout << "Enter the Input : ";
        std::cin >> length >> breadth;
    }
    int returnArea()
    {
        return length * breadth;
    }
};

int main()
{
    Area ar;
    std::cout << ar.returnArea() << std::endl;
    return 0;
}