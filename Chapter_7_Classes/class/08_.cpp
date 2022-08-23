// Print the average of three numbers entered by the user
// by creating a class named 'Average' having a function to calculate and print the average
// without creating any object of the Average class.

// #include <iostream>

// class Average
// {
// public:
//     Average()
//     {
//         int a = 7, b = 6, c = 9;
//         double avr = (a + b + c) / 3;
//         std::cout << "Average = " << avr << std::endl;
//     }
// };

// int main()
// {
//     Average av;
//     return 0;
// }

#include <iostream>

class Average
{
public:
    static float calAverage(float a, float b, float c)
    {
        return (a + b + c) / 3;
    }
};

int main()
{
    float a, b, c;
    std::cout << "Enter the input a , b , and c : ";
    std::cin >> a >> b >> c;
    std::cout << Average::calAverage(a, b, c) << std::endl;
}