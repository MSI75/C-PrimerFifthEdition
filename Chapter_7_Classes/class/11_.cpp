// Write a program that would print the information (name, year of joining, salary, address) of
// three employees by creating a class named 'Employee'.
// The output should be as follows:
// Name        Year of joining        Address
// Robert        1994               64C-WallsStreat
// Sam           2000               68D-WallsStreat
// John          1999               26B-WallsStreat

#include <iostream>
#include <vector>

class Employee
{
public:
    std::string name;
    int year_of_joining;
    std::string address;
};

int main()
{
    std::vector<Employee> em{3};

    std::cout << "Enter input : " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> em[i].name >> em[i].year_of_joining >> em[i].address;
    }
    std::cout << "The output : " << std::endl;
    std::cout << "Name"
              << " \t\t"
              << "Year of joining "
              << " \t"
              << "Address " << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cout << "Name "
                  << em[i].name << " \t"

                  << em[i].year_of_joining << " \t\t\t"

                  << em[i].address << std::endl;
    }
    return 0;
}
