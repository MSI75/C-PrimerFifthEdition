// Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively
// by creating a class named 'Rectangle' with a function named 'Area' which returns the area.
// Length and breadth are passed as parameters to its constructor.

// #include <iostream>

// class Rectangle
// {
//     int length, breadth;

// public:
//     int Area(int length, int breadth)
//     {
//         return length * breadth;
//     }
//     Rectangle()
//     {
//         length = 4 * 5;
//         breadth = 5 * 8;
//         std::cout << "\nArea = " << Area(length, breadth) << std::endl;
//     }
// };

// int main()
// {

//     Rectangle Rc;

//     return 0;
// }

#include <iostream>

class Rectangle
{
    int length, breadth;

public:
    Rectangle(int a, int b)
    {
        this->length = a;
        this->breadth = b;
    }
    int Area()
    {
        return this->length * this->breadth;
    }
};

int main()
{
    Rectangle rt(4, 5);
    // Rectangle rt;
    std::cout << rt.Area() << std::endl;
    return 0;
}