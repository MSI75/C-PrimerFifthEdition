// Write a program to print the area of a rectangle by
// creating a class named 'Area' having two functions.
// First function named as 'setDim' takes the length and breadth of the rectangle as parameters and
// the second function named as 'getArea' returns the area of the rectangle.
// Length and breadth of the rectangle are entered through keyboard

// #include <iostream>

// class Area
// {
//     int length, breadth;

// public:
//     void getDim()
//     {
//         std::cout << "Enter the length and breadth : ";
//         std::cin >> length >> breadth;
//     }
//     int getArea()
//     {
//         int rectangle = length * breadth;
//         return rectangle;
//     }
// };

// int main()
// {
//     Area ar;
//     ar.getDim();
//     std::cout << "Area = " << ar.getArea() << std::endl;
// }
#include <iostream>
class Area
{
    int length, breadth;

public:
    void getDim(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int getArea()
    {
        return length * breadth;
    }
};

int main()
{
    Area ar;
    ar.getDim(7, 5);
    std::cout << "Area = " << ar.getArea() << std::endl;
    return 0;
}