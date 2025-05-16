#include <iostream>
#include <limits>

int main() {
  char inputChar;
  int inputNumber;
  int correctNumber = 4567;
  char correctChar = 'H';

  std::cin >> inputChar;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  std::cin >> inputNumber;

  if (inputChar == correctChar && inputNumber == correctNumber) {
    std::cout << "safe unlocked" << std::endl;
  }else if (inputChar == correctChar && inputNumber != correctNumber) {
    std::cout << "safe locked - change digit" << std::endl;
  }else if (inputChar != correctChar && inputNumber == correctNumber) {
    std::cout << "safe locked - change char" << std::endl;
  }else{
       std::cout << "safe locked" << std::endl;
  }
  return 0;
}
