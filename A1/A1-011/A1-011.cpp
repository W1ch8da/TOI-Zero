#include <iostream>
#include <string>


std::string runLengthEncode(const std::string& input) {
    std::string result;
    char currentChar = input[0];
    int count = 1;

    for (size_t i = 1; i < input.length(); ++i) {
        if (input[i] == currentChar) {
            ++count;
        } else {
            result += std::to_string(count) + currentChar;
            currentChar = input[i];
            count = 1;
        }
    }
    result += std::to_string(count) + currentChar;
    return result;
}
int main() {
  std::string input;
  std::cin >> input;
  if (input.length() != 5) {
    std::cerr << "Error: Input must be exactly 5 characters long.\n";
    return 1;
  }
  std::string encoded = runLengthEncode(input);
  std::cout << encoded;
  return 0;
}
