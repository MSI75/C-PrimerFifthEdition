#include <iostream>

int main()
{
    // count the number of grades by clusters of ten: 0--9, 10--19, ... 90--99, 100
    int a[10] = {}; // 11 buckets, all value initialized to 0
    int grad;
    while (std::cin >> grad)
    {
        if (grad <= 100)
        {
            ++a[grad / 10]; // increment the counter for the current cluster
        }
    }

    for (auto i : a) // for each counter in a

    {
        std::cout << i << std::endl; // print the value of that counter
    }
}