#include <iostream>

int main()
{
    int score1, score2, sum;
    std::cin >> score1 >> score2;
    sum = score1 + score2;

    std::cout << sum << "\n"
              << (sum >= 50 ? "pass" : "fail");

    return 0;
}
