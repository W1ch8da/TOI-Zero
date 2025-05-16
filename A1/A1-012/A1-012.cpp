#include <algorithm>
#include <iostream>
#include <string>

int reverseNumber(int n) {
  std::string numStr = std::to_string(n);
  std::reverse(numStr.begin(), numStr.end());
  return std::stoi(numStr);
}

int main() {

  int inputNumber;
  char operation;

  std::cin >> inputNumber;
  std::cin >> operation;

  int reversedNumber = reverseNumber(inputNumber);
  int result;
  if (operation == '+') {
    result = inputNumber + reversedNumber;
    std::cout << inputNumber << " + " << reversedNumber << " = " << result
              << std::endl;
  } else if (operation == '*') {
    result = inputNumber * reversedNumber;
    std::cout << inputNumber << " * " << reversedNumber << " = " << result
              << std::endl;
  } else {
    std::cout << "Invalid operation. Please enter '+' or '*'." << std::endl;
    return 1; // Indicate an error
  }

  return 0;
}
