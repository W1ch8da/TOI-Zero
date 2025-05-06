#include <iostream>

int main()
{
    int age;
    std::string status;
    std::cin >> age >> status;

    if (age < 18 || status == "s" || status == "S")
    {
        std::cout << "20";
    }
    // else if (age >= 18 || status == "s" || status == "S")
    // {
    //     std::cout << "20";
    // }
    else
    {
        std::cout << "50";
    }

    return 0;
}