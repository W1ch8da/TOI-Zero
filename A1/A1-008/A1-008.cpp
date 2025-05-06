#include <iostream>

int main()
{
    std::string inputString;
    std::getline(std::cin, inputString);

    int characterCount = inputString.length();

    if (characterCount == 13)
    {
        std::cout << "yes";
    }
    else
    {
        std::cout << "no";
    }

    return 0;
}