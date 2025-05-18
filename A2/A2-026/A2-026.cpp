#include <bits/stdc++.h>
#include <string>
int main() {

  int n;
  std::cin >> n;

  std::string name, heaviestName;
  int weight;
  int countOverweight = 0;
  int heaviestWeight = -1;
  const double LIMIT = 15;

  for (int i = 0; i < n; ++i) {
    std::cin >> name >> weight;

    if (weight > LIMIT) {
      countOverweight++;
    }
    if (weight > heaviestWeight) {
      heaviestWeight = weight;
      heaviestName = name;
    }
  }
  std::cout << countOverweight << std::endl;
  std::cout << heaviestName << " " << heaviestWeight << std::endl;
  return 0;
}
