#include <bits/stdc++.h>
#include <string>

struct Birthday {
  int day;
  int month;
  int year;
};

Birthday getBirthdayFromInput(int personNumber) {
  Birthday birthday;
  std::cin >> birthday.year;
  std::cin >> birthday.month;
  std::cin >> birthday.day;
  return birthday;
}

std::string compareBirthdays(const Birthday &b1, const Birthday &b2) {
  if (b1.year < b2.year) {
    return "1";
  } else if (b1.year > b2.year) {
    return "2";
  } else {
    if (b1.month < b2.month) {
      return "1";
    } else if (b1.month > b2.month) {
      return "2";
    } else {
      if (b1.day < b2.day) {
        return "1";
      } else if (b1.day > b2.day) {
        return "2";
      } else { // Days are the same
        return "0";
      }
    }
  }
}
int main() {
    Birthday person1 = getBirthdayFromInput(1);
    Birthday person2 = getBirthdayFromInput(2);
    std::cout << compareBirthdays(person1, person2) << std::endl;

  return 0;
}
