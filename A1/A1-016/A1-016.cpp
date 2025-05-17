#include <bits/stdc++.h>
#include <string>

int main() {
  std::string inputNumber;
  std::cin >> inputNumber;

  if (inputNumber.length() == 8 && inputNumber[2] == '1' &&
      inputNumber[3] == '6') {
    std::cout << "yes" << std::endl;
  } else
    std::cout << "no" << std::endl;

  return 0;
}
