#include <iostream>
using namespace std;

int arr[1009];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> arr[i];
  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
      cnt++;
  }
  cout << cnt;
  return 0;
}
