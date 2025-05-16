#include <iostream>

int main() {
  int inputNumber[3];
  int smallest;
  for (int i = 0; i < 3; i++) {
    std::cin >> inputNumber[i];
    if (i == 0) {
        smallest = inputNumber[i];
    }else if(inputNumber[i]<smallest){
        smallest = inputNumber[i];
    }
  }
  std::cout << smallest << std::endl;
  return 0;
}
