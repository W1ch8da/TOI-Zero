#include <iostream>
using namespace std;

int main() {
    int arr[3];

    // Input 3 values, one per line
    for (int i = 0; i < 3; i++) {
        cin >> arr[i];
    }

    // Initialize max and min with the first value
    int maxVal = arr[0];

    // Compare to find max and min
    for (int i = 1; i < 3; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];

    }

    // Output results
    cout <<  maxVal << endl;


    return 0;
}
