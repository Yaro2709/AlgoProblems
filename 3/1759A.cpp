#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        string s = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        if (s.find(str) != -1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}