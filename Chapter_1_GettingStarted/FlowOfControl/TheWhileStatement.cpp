// while statement repeatedly executes a section of code so long as a given condition is true
// while executes by (alternately) testing the condition and executing the associated statement until the condition is false

#include <iostream>

int main()
{
    int sum = 0, n = 0;
    // keep executing the while as long as val is less than or equal to 10
    while (n <= 10)
    {
        sum += n; // assigns sum + n to sum
        ++n;      // add 1 to n
    }
    std::cout << "SUM = " << sum << std::endl;
    return 0;
}