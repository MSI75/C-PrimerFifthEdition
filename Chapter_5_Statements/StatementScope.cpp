#include <iostream>
#include <vector>

int main()
{
    // int n;
    // std::cout << "Enter the number of N : ";
    // std::cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     std::cout << i << std::endl;
    // }
    // std::cout<<i<<std::endl;   // error: i is not accessible outside the loop

    // std::vector<std::string> scores = {"F", "D", "C", "B", "A", "A+"};
    // std::string latterGrade;
    // int grade;
    // std::cin >> grade;
    // if (grade < 60)
    // {
    //     latterGrade = scores[0];
    //     std::cout << latterGrade << std::endl;
    // }
    // else
    // {
    //     latterGrade = scores[(grade - 50) / 10];
    //     std::cout << latterGrade << std::endl;
    // }

    /*  if (grade % 10 > 7)
     {
         latterGrade += "+"; // grades ending in 8 or 9 get a +
         std::cout << latterGrade << std::endl;
     }
     else if (grade % 10 < 3)
     {
         latterGrade += "-"; // those ending in 0, 1, or 2 get a -
         std::cout << latterGrade << std::endl;
     } */

    // if failing grade, no need to check for a plus or minus
    /*  if (grade < 60)
     {
         latterGrade = scores[0];
         std::cout << latterGrade << std::endl;
     }
     else
     {
         latterGrade = scores[(grade - 50) / 10]; // fetch the letter grade
         if (grade != 100)                        // add plus or minus only if not already an A++
         {
             if (grade % 10 > 7)
                 latterGrade += '+'; // grades ending in 8 or 9 get a +
                 }
         else if (grade % 10 < 3)
             latterGrade += '-'; // grades ending in 0, 1, or 2 get a -
     }
     std::cout << latterGrade << std::endl; */

    //  Range for Statement
    // std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    // for (int &n : v) // for each element in v
    // {
    //     n *= 2; // double the value of each element in v
    //     std::cout << n << std::endl;
    // }

    // for (auto beg = v.begin(), end = v.end(); beg != end; ++beg)
    // {
    //     auto &n = *beg; // r must be a reference so we can change the element
    //     n *= 2;         // double the value of each element in v
    //     std::cout << n << std::endl;
    // }

    // std::string rsp; // used in the condition; can't be defined inside the do
    // do
    // {
    //     std::cout << "please enter two values: ";
    //     int val1 = 0, val2 = 0;
    //     std::cin >> val1 >> val2;
    //     std::cout << "The sum of " << val1 << " and " << val2 << " = " << val1 + val2 << "\n\n"
    //               << "More? Enter yes or no: ";
    //     std::cin >> rsp;
    // } while (!rsp.empty() && rsp[0] != 'n');

    // goto
    int a, b;
    std::cin >> a >> b;
    // begin:
    //     int sz = getline();
    //     if (sz <= 0)
    //     {
    //         goto begin;
    //     }
}