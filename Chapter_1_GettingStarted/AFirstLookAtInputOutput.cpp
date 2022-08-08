// link section
#include <iostream>

// program start
int main()
{
    // variable declaration
    int a, b;
    // output print
    std::cout << "Enter the two value :" << std::endl;
    // input print
    std::cin >> a >> b;

    // output result print
    std::cout << "sum = " << a + b << std::endl;
    return 0;
}

//  #include directives for a program at the beginning of the source file and a single line

//  A stream is a sequence of characters read from or written to an IO device
// iostream library are two types
// 01. istream -> cin , the input
// 02. ostream -> cout, cerr, or clog, the output

//  ** iostream defines four IO objects
// 01. cin -> standard input
// 02. cout -> standard output
// 03. cerr -> standard error
// 03. clog -> general information about the execution

// Using Names from the Standard Library
// std::endl -> newline to the console
// std::cout->Printing data to the console(terminal)
// std::cin->Reading data from the terminal
// std::cerr->printing error to the consol
// std::clog->printing log message to the consol