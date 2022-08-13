//  Dealing with the Characters in a string
#include <iostream>

int main()
{
    /*
     std::string str("some string");
     // print the characters in str one character to a line
     for (auto c : str) // for every char in str
     {
         std::cout << c; // print the current character followed by a newline
     }
     */
    // Using a Range for to Change the Characters in a string
    /*

    std::string s("Hello World !!!");
    // convert s to uppercase
    for (char &c : s) // for every char in s (note: c is a reference)
    {
        c = toupper(c); // c is a reference, so the assignment changes the char in s
    }

    std::cout << s << std::endl;

    */

    /*
    std::string s("some string");
     std::cout << s << std::endl;
     if (!s.empty())
     {
         s[0] = toupper(s[0]);
     }
     std::cout << s << std::endl;

     */
    const std::string hexdigits = "0123456789ABCDEF"; // possible hex digits
    std::cout << "Enter a series of numbers between 0 and 15"
              << " separated by spaces. Hit ENTER when finished: " << std::endl;
    std::string result;       // will hold the resulting hexify'd string
    std::string::size_type n; // hold numbers from the input
    while (std::cin >> n)
        if (n < hexdigits.size())   // ignore invalid input
            result += hexdigits[n]; // fetch the indicated hex digit
    std::cout << "Your hex number is: " << result << std::endl;
}