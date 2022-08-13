#include <iostream>

void alphabet(std::string str, int n);
int main()
{
    std::string str = "programming";
    int n = str.size();
    alphabet(str, n);
}

void alphabet(std::string str, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    std::cout << str << std::endl;
}