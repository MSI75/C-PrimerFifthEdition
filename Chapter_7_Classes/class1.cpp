#include <iostream>
#include <vector>

class Student
{
public:
    int id;
    std::string name;
};

int main()
{
    // Student st;
    std::vector<Student> st;
    // st.id = 1;
    // st.name = "MSI";
    // std::cout << st.id << "\t" << st.name << std::endl;
    for (int i = 0; i < 3; i++)
    {
        std::cin >> st.id >> st.name;
    }
    for (int i = 0; i < 3; i++)
    {
        std::cout << st.id << "\t" << st.name << std::endl;
    }
    return 0;
}