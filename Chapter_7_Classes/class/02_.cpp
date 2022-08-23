// Assign and print the roll number,
// phone number and address of two students having names "Sam" and "John"
// respectively by creating two objects of the class 'Student'.
#include <iostream>
#include <vector>

class Student
{

    std::string name;
    int roll_no;
    int phone;
    std::string address;

public:
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            std::cin >> roll_no >> name >> phone >> address;
        }

        for (int i = 0; i < 2; i++)
        {
            std::cout << roll_no << " " << name << " " << phone << " " << address << std::endl;
        }
    }
};

int main()
{
    // std::vector<Student> st{2};
    Student st;

    std::cout << "Enter input : ";
    st.display();

    // for (int i = 0; i < 2; i++)
    // {
    //     std::cin >> st[i].roll_no >> st[i].name >> st[i].phone >> st[i].address;
    // }

    // for (int i = 0; i < 2; i++)
    // {
    //     std::cout << st[i].roll_no << " " << st[i].name << " " << st[i].phone << " " << st[i].address << std::endl;
    // }
}