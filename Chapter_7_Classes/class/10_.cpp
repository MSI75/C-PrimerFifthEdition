// Write a program to print the volume of a box by creating a class named 'Volume'
// with an initialization list to initialize its length, breadth and height.
// (just to make you familiar with initialization lists)

#include <iostream>

class Box
{
private:
    double length;
    double breadth;
    double height;

public:
    Box(double x, double y, double z)
        : length(x), breadth(y), height(z) {}

    double volume() const { return length * breadth * height; }
};

int main()
{
    Box box(7, 8, 9);
    std::cout << box.volume() << std::endl;
    return 0;
}