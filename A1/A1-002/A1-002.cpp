#include <iostream>
using namespace std;

int main() {
  int amount;
  cin >> amount;

  int coin10 = amount / 10;
  amount %= 10;

  int coin5 = amount / 5;
  amount %= 5;

  int coin2 = amount / 2;
  amount %= 2;

  int coin1 = amount;

  cout << "10 = " << coin10 << endl;
  cout << "5 = " << coin5 << endl;
  cout << "2 = " << coin2 << endl;
  cout << "1 = " << coin1 << endl;

  return 0;
}
