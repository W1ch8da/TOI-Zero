#include <iostream>
using namespace std;

int main() {
    int date, month;
    cin >> month >>date ;

    // Check if it is a season change day
    if (date >= 21 && month % 3 == 0) {
        month++;
        if (month > 12) month = 1; // wrap around to January
    }

    // Determine the season
    if (month >= 1 && month <= 3)
        cout << "winter";
    else if (month >= 4 && month <= 6)
        cout << "spring";
    else if (month >= 7 && month <= 9)
        cout << "summer";
    else if (month >= 10 && month <= 12)
        cout << "fall";
    else
        cout << "Invalid month";

    return 0;
}
