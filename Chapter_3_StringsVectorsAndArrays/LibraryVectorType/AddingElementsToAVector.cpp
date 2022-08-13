#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = {1, 2, 3}; // empty vector
    for (int i = 0; i != 100; ++i)
    {
        // ivec.pop_back(); // append sequential integers to v2
    }
    // at end of loop v2 has 100 elements, values 0 . . . 99

    // read words from the standard input and store them as elements in a vector
    std::string word;
    std::vector<std::string> text; // empty vector
    while (std::cin >> word)
    {
        // text.pop_back(word); // append word to text
    }
}