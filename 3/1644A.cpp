#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int r = 0, g = 0, b = 0;
        int flag = 1;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'R' && r == 0) {
                flag = 0;
            }
            if (s[i] == 'G' && g == 0) {
                flag = 0;
            }
            if (s[i] == 'B' && b == 0) {
                flag = 0;
            }
            if (s[i] == 'r') {
                r = 1;
            }
            if (s[i] == 'g') {
                g = 1;
            }
            if (s[i] == 'b'){
                b = 1;
            }
        }

        if (flag == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}