#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <string>

int main() {
  std::unordered_set<int> seen;
  std::vector<int> uniqueNumbers;
  std::string line;
  std::getline(std::cin, line);

  std::stringstream ss(line);
  std::vector<int> inputNumbers;
  int number;

  while (ss >> number) {
    inputNumbers.push_back(number);
  }
  if (inputNumbers.size() == 10) {
    for (int number : inputNumbers) {
      if (seen.find(number) == seen.end()) {
        seen.insert(number);
        uniqueNumbers.push_back(number);
      }
    }
    for (int number : uniqueNumbers) {
      std::cout << number << " ";
    }
  }

  return 0;
}
