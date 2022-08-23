/* #include <iostream>

int main()
{
    // Sales_data total; // variable to hold the running sum
    // if (read(cin, total))
    // {                     // read the first transaction
    //     Sales_data trans; // variable to hold data for the next transaction
    //     while (read(cin, trans))
    //     {                                     // read the remaining transactions
    //         if (total.isbn() == trans.isbn()) // check the isbns
    //             total.combine(trans);         // update the running total
    //         else
    //         {
    //             print(cout, total) << endl; // print the results
    //             total = trans;              // process the next book
    //         }
    //     }
    //     print(cout, total) << endl; // print the last transaction
    // }
    // else
    // {                                // there was no input
    //     cerr << "No data?!" << endl; // notify the user
    // }
}
#include <iostream>
struct Sales_data
{
    // new members: operations on Sales_data objects
    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;
    // data members are unchanged from § 2.6.1 (p. 72)
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
// nonmember Sales_data interface functions
Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

int main()
{
} */

// #include <iostream>

// class Sum
// {
//     int a;
//     int b;

// public:
//     void sum(int a, int b);
//     void display();
// };

// void Sum::sum(int a, int b)
// {
//     std::cout << "Enter the number : ";
//     std::cin >> a >> b;
// }

// void Sum::display()
// {
//     std::cout << "a = " << a
//               << " "
//               << "b = " << b << std::endl;
// }

// int main()
// {
//     Sum s;
//     s.sum(7, 5);
//     s.display();
// }

#include <iostream>
#include <vector>

class Student
{
private:
    int *data;

public:
    Student()
    {
        std::cout << "Hello there!\n";
    }
    ~Student()
    {
        delete data;
        std::cout << "Hello there i am destructure\n";
    }
    int id;
    std::string name;
    void callStudent()
    {
        std::cout << Student::name << std::endl;
    }
};

int main()
{

    Student st;

    std::cout << st.id << std::endl;
}