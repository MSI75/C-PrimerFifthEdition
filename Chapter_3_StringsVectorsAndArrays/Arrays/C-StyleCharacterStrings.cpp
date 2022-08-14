#include <iostream>

int main()
{
    char ca[] = {'c', '+', '+'};          // not null terminated
    std::cout << sizeof(ca) << std::endl; // disaster: ca isn't null terminated
}