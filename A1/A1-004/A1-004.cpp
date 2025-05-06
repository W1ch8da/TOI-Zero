#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int score[3];
  float percent[3];
  bool isFail = false;
  // Input scores
  for (int i = 0; i < 3; i++) {
    cin >> score[i];
  }

  // Calculate percentages
  percent[0] = (score[0] / 10.0) * 100;
  percent[1] = (score[1] / 40.0) * 100;
  percent[2] = (score[2] / 50.0) * 100;

  // Output with 2 decimal places and check for failure
  cout << fixed << setprecision(2);
  for (int i = 0; i < 3; i++) {
    if (percent[i] < 50.0) {
      isFail = true;
    }
  }

  if (isFail) {
    cout << "fail" << endl;
  } else {
    cout << "pass" << endl;
  }

  return 0;
}
