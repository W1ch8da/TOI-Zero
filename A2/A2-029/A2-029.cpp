#include <bits/stdc++.h>

int main() {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      if (j == 1 || j == i || i == n)
        std::cout << 0 << " ";
      else
        std::cout << 1 << " ";
    }
    std::cout << "\n";
  }
  return 0;
}
