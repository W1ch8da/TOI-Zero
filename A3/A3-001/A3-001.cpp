#include <iostream>
using namespace std;

int grid[100][100];

int main() {
    int n;
    cin >> n;
    const int m = 4;

    // Read and print input
    cout << "Input Grid (" << n << "x" << m << "):" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> grid[i][j];
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }

    int cnt = 0;

    // Check each cell
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int val = grid[i][j];
            bool is_peak = true;

            // Check up
            if (i - 1 >= 0 && grid[i - 1][j] >= val) is_peak = false;
            // Check down
            if (i + 1 < n && grid[i + 1][j] >= val) is_peak = false;
            // Check left
            if (j - 1 >= 0 && grid[i][j - 1] >= val) is_peak = false;
            // Check right
            if (j + 1 < m && grid[i][j + 1] >= val) is_peak = false;

            if (is_peak) cnt++;
        }
    }

    cout << "Output: " << cnt << endl;
    return 0;
}
