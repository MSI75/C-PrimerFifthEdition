#include <iostream>
int main()
{
    float sum = 0, i = 0;

    std::cout << "Enter the number : " << std::endl;

    // read until end-of-file, calculating a running total of all values read
    while (std::cin >> i)
    {
        sum += i;
    }
    std::cout << "SUM = " << sum << std::endl;
    return 0;
}
