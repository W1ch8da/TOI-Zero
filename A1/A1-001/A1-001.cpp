#include <iostream>
using namespace std;

int main() {
    string firstName, lastName;
    cin >> firstName >> lastName;

    cout << "Hello " << firstName << " " << lastName << endl;
    cout << firstName.substr(0, 2) << lastName.substr(0, 2) << endl;

    return 0;
}
