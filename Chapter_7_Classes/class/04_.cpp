
// Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5
// units by creating a class named 'Triangle'
// with the constructor having the three sides as its parameters.

// #include <iostream>

// class Triangle
// {
//     int a, b, c;

// public:
//     Triangle()
//     {
//         a = 3, b = 4, c = 5;
//         int parameters = a + b + c;
//         std::cout << "\nParameters = " << parameters << std::endl;
//     }
// };

// int main()
// {
//     Triangle tr;
//     return 0;
// }

#include <iostream>

class Triangle
{
public:
    Triangle(int a, int b, int c)
    {
        int parameters = a + b + c;
        std::cout << "\nParameters = " << parameters << std::endl;
    }
};

int main()
{
    Triangle tr(3, 4, 5);
    return 0;
}
