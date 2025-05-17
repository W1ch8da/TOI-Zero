#include <bits/stdc++.h>

const int N = 100;

int p[N + 5];
int qs[N + 5]; // quick sum
std::set<int> s;

int main() {
  int n;
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    std::cin >> p[i];
    qs[i] = qs[i - 1] + p[i];
  }
  for (int l = 1; l <= n; l++) {
    for (int r = l; r <= n; r++) {
      int sum = qs[r] - qs[l - 1];

      s.insert(sum);
    }
  }
  std::cout << s.size();
}
/*
4
10 10 5 15

*/
