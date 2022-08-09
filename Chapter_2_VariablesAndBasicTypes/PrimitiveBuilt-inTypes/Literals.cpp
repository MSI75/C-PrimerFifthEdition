// 'a' // character literal
// "Hello World!" // string literal

#include <iostream>

int main()
{
    // multiple string literals
    std::cout << "a really, really long string literal "
                 "that spans two lines"
              << std::endl;

    // newline \n
    // horizontal tab \t
    // alert (bell) \a
    // vertical tab \v
    // backspace \b
    // double quote \"
    // backslash \\ 
    // question mark \?
    // single quote \'
    // carriage return \r
    // formfeed \f

    std::cout << "\n newline " << std::endl;
    std::cout << "\t horizontal tab \t" << std::endl;
    std::cout << "\a alert (bell) \a" << std::endl;
    std::cout << "\v vertical tab \v" << std::endl;
    std::cout << "\b backspace \b" << std::endl;
    std::cout << "\" double quote \"" << std::endl;
    std::cout << "\\ backslash  \\" << std::endl;
    std::cout << "\? question mark \? " << std::endl;
    std::cout << "\' single quote \'" << std::endl;
    std::cout << "\r carriage return \r" << std::endl;
    std::cout << "\f formfeed \f" << std::endl;

    std::cout << "115" << std::endl;
}