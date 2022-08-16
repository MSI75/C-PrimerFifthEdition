#include <iostream>

int main()
{
    int aCh = 0, eCh = 0, iCh = 0, oCh = 0, uCh = 0;
    char ch;
    while (std::cin >> ch && ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
    {
        // if ch is a vowel, increment the appropriate counter
        switch (ch)
        {
        case 'a':
            ++aCh;
            break;
        case 'e':
            ++eCh;
            break;
        case 'i':
            ++iCh;
            break;
        case 'o':
            ++oCh;
            break;
        case 'u':
            ++uCh;
            break;
        default:
            std::cout << "Nothing " << std::endl;
        }
    }

    std::cout << "Number of vowel a : \t" << aCh << std::endl;
    std::cout << "Number of vowel e : \t" << eCh << std::endl;
    std::cout << "Number of vowel i : \t" << iCh << std::endl;
    std::cout << "Number of vowel o : \t" << oCh << std::endl;
    std::cout << "Number of vowel u : \t" << uCh << std::endl;
}