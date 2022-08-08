/*
To recap, the overall execution flow of this for is:

1. Create val and initialize it to 1.
2. Test whether val is less than or equal to 10. If the test succeeds, execute the
for body. If the test fails, exit the loop and continue execution with the first
statement following the for body.
3. Increment val.
4. Repeat the test in step 2, continuing with the remaining steps as long as the
condition is true

*/

#include <iostream>

int main()
{
    int sum = 0;
    // sum values from 1 through 10 inclusive
    for (int i = 1; i <= 10; ++i)
    {
        // sum += i;
        std::cout << i << std::endl;
    }
    std::cout << "SUM = " << sum << std::endl;
    return 0;
}
