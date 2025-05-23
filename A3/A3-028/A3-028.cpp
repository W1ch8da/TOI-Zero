#include <bits/stdc++.h>

int pic[1009][1009];
int dy[] = {0, 1, 0, -1, 1, -1, -1, 1};
int dx[] = {1, 0, -1, 0, 1, 1, -1, -1};

int main() {
  int sy, sx;
  std::cin >> sy >> sx;

  int n;
  std::cin >> n;

  for (int i = 1; i <= n; i++) {
    int y, x;
    std::cin >> y >> x;
    y++;
    x++;
    pic[y][x] = 100;
    for (int k = 0; k < 8; k++) {
      int yy = y + dy[k], xx = x + dx[k];
      pic[yy][xx]++;
    }
  }
  for (int i = 1; i <= sy; i++) {
    for (int j = 1; j <= sx; j++) {
      if (pic[i][j] >= 100) {
        std::cout << 'x' << " ";
      } else {
        std::cout << pic[i][j] << " ";
      }
    }
    std::cout << "\n";
  }
  return 0;
}
