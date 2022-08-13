#include <iostream>
#include <vector>

int main()
{
    std::vector<int> v = {1, 2, 3, 4, 5};
    std::vector<int> v1 = {7, 8, 9, 10, 11};
    v1.swap(v);

    for (int i = 0; i < v1.size(); i++)
    {
        std::cout << v1.at(i) << std::endl;
    }
}