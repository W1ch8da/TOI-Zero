#include <iostream>
using namespace std;

int main()
{
    string s;
    string vowels[5] = {"a", "e", "i", "o", "u"};
    cin >> s;
    int flag = 0;
    for (int i = 0; i < 5; i++)
    {
        if (s == vowels[i])
        {
            flag++;
        }
    }
    if (flag == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }

    return 0;
}