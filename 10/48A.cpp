#include <iostream>

using namespace std;

int main()
{
    int i;
    string a[3];

    for (i = 0; i < 3; i++)
    {
        cin >> a[i];
    }

    if ((a[0] == "rock" && a[1] == "scissors" && a[2] == "scissors") || (a[0] == "scissors" && a[1] == "paper" && a[2] == "paper") ||
        (a[0] == "paper" && a[1] == "rock" && a[2] == "rock"))
        cout << "F" << endl;
    else if ((a[1] == "rock" && a[0] == "scissors" && a[2] == "scissors") || (a[1] == "scissors" && a[0] == "paper" && a[2] == "paper") ||
        (a[1] == "paper" && a[0] == "rock" && a[2] == "rock"))
        cout << "M" << endl;
    else if ((a[2] == "rock" && a[1] == "scissors" && a[0] == "scissors") || (a[2] == "scissors" && a[1] == "paper" && a[0] == "paper") ||
        (a[2] == "paper" && a[1] == "rock" && a[0] == "rock"))
        cout << "S" << endl;
    else
        cout << "?" << endl;
}