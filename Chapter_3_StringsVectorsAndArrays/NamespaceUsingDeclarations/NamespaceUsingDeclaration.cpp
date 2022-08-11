
// A using declaration has the form using namespace::name;

#include <iostream>
// using declaration; when we use the name cin, we get the one from the namespace std
using std::cin;
int main()
{
    int i;
    cin >> i; // ok: cin is a synonym for std::cin
    // cout << i; // error: no using declaration; we must use the full name
    std::cout << i << std::endl; // ok: explicitly use cout from nameSpsace std
    return 0;
}