#include <iostream>
// using namespace std;
// std::string;
int main()
{
    std::string s1;                //  default initialization; s1 is the empty string
    std::string(s1);               //  default initialization; s1 is the empty string
    std::string s2 = s1;           // s2 is a copy of s1
    std::string s2(s1);            // s2 is a copy of s1
    std::string s3 = "Hello baby"; // s3 is a copy of the string literal
    std::string s3("Hello baby");  // s3 is a copy of the string literal
    std::string s4(10, 'S');       // s4 is ssssssssss

    // Direct and Copy Forms of Initialization
    std::string s5 = "hiya"; // copy initialization
    std::string s6("hiya");  // direct initialization
    std::string s7(10, 'c'); // direct initialization; s7 is cccccccccc

    std::string s8 = std::string(10, 'c'); // copy initialization; s8 is cccccccccc

    std::string temp(10, 'c'); // temp is cccccccccc
    std::string s8 = temp;     // copy temp into s8
}