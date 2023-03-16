#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        string value;
        cin >> value;

        if ((value == "c") || (value == "o") || (value == "d") || (value == "e") || (value == "f") || (value == "r") || (value == "s")) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}