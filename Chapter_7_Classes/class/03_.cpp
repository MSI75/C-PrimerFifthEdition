// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
// units by creating a class named 'Triangle'
// with a function to print the area and perimeter.

#include <iostream>

class Triangle
{
public:
    int perimeter(int a, int b, int c)
    {
        int perimeter = a + b + c;
        return perimeter;
    }
    int area(int b, int h)
    {
        double area = (b * h) / 2;
        return area;
    }
};

int main()
{
    Triangle tr;

    std::cout << "\nArea = " << tr.area(4, 7) << "\n"
              << "\nPerimeter = "
              << tr.perimeter(3, 4, 5) << std::endl;
}