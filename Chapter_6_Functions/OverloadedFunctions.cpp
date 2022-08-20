#include <iostream>

int main()
{
    // same name but different parameter lists
    // void print(const char *cp);
    // void print(const int *beg, const int *end);
    // void print(const int ia[], size_t size);
    // int j[2] = {0,1};
    // print("Hello World"); // calls print(const char*)
    // print(j, end(j) - begin(j)); // calls print(const int*, size_t)
    // print(begin(j), end(j)); // calls print(const int*, const int*)

    // Record lookup(const Account&); // find by Account
    // Record lookup(const Phone&); // find by Phone
    // Record lookup(const Name&); // find by Name
    // Account acct;
    // Phone phone;
    // Record r1 = lookup(acct); // call version that takes an Account
    // Record r2 = lookup(phone); // call version that takes a Phone
}