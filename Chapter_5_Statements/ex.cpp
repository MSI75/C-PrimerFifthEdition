#include <iostream>

int main()
{
    int n, a, b;
    std::cin >> n;
    switch (n)
    {
    case 1:
        a = 7, b = 5;
        std::cout << a + b << std::endl;
        break;

    default:
        std::cout << "Noting";
        break;
    }
}