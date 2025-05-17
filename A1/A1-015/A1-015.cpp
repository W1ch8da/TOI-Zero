#include <bits/stdc++.h>
#include <string>

int main() {
  std::string name;
  std::string surname;
  std::string age;
  std::string password;
  std::getline(std::cin, name); // Read the entire line into the 'name' variable

  std::getline(std::cin,
               surname); // Read the entire line into the 'surname' variable

  std::getline(std::cin,
               age); // Read the entire line into the 'age_str' variable

  if (name.length() > 5 && surname.length() > 5) {
    // First and last names are longer than five characters
    if (name.length() >= 2 && !surname.empty() && !age.empty()) {
      password += name.substr(0, 2); // First two characters of the first name
      password += surname.back();    // Last character of the last name
      password += age.back();        // Last character of the age
      std::cout <<  password << std::endl;
    } else {
      std::cout << "Error: First name needs at least two characters, and "
                   "surname/age cannot be empty."
                << std::endl;
    }
  } else {
    // At least one of the names is not longer than five characters
    if (!name.empty() && !surname.empty() && !age.empty()) {
      password += name.front();   // First letter of the first name
      password += age;            // The entire age string
      password += surname.back(); // Last character of the last name
      std::cout << password << std::endl;
    } else {
      std::cout << "Error: Name, surname, and age cannot be empty."
                << std::endl;
    }
  }

  return 0;

}
