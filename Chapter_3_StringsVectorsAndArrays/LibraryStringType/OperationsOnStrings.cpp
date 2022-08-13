#include <iostream>
// using namespace std;
int main()
{
    // Reading and Writing strings
    /*

    std::string s1, s2;   // empty string
    std::cin >> s1 >> s2; // read a whitespace-separated string into s
    std::cout << s1 << std::endl
              << s2 << std::endl;

    */

    // Reading an Unknown Number of strings
    /* std::string word;
    while (std::cin >> word)
    {
        std::cout << word << std::endl;
    } */

    // Using getline to Read an Entire Line
    /*

    std::string line;
    // read input a line at a time until end-of-file
    while (std::getline(std::cin, line))
    {
        std::cout << line << std::endl;
    }

    */

    //  The string empty and size Operations
    std::string line;
    // while (std::getline(std::cin, line))
    // {
    //     if (!line.empty())
    //     {
    //         std::cout << line << std::endl;
    //     }
    // }

    // while (std::getline(std::cin, line))
    // {
    //     if (line.size() > 80)
    //     {
    //         std::cout << line << std::endl;
    //     }
    // }

    // Assignment for strings
    std::string st1(10, 'c'), st2; // st1 is cccccccccc; st2 is an empty string
    st1 = st2;                     // assignment: replace contents of st1 with a copy of st2
                                   // both st1 and st2 are now the empty string

    return 0;
}