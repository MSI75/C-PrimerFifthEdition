#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (auto &i : v)          // for each element in v (note: i is a reference)
        i *= i;                // square the element value
    for (auto i : v)           // for each element in v
        std::cout << i << " "; // print the element
    std::cout << std::endl;
}