// Create a class named 'Student' with a string variable 'name'
// and an integer variable 'roll_no'.
// Assign the value of roll_no as '2' and that of name as "John"
// by creating an object of the class Student.

#include <iostream>

class Student
{

    std::string name;
    int roll_no;

public:
    void display()
    {
        name = "Johb";
        roll_no = 2;
        std::cout << roll_no << " " << name << std::endl;
    }
};

int main()
{
    Student st;
    // st.roll_no = 2;
    // st.name = "Johb";

    // std::cout << st.roll_no << "  " << st.name << std::endl;

    st.display();
    return 0;
}