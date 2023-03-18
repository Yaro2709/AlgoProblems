#include<iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int j;
        cin >> j;

        string s1;
        cin >> s1;

        string s2;
        cin >> s2;

        int n = 0;
        for (int i = 0; i < j; i++) { 
            if (s1[i] == s2[i]) {
                n += 1;
            }
            else if ( ((s1[i] == 'G') && (s2[i] == 'B')) || ((s1[i] == 'B') && (s2[i] == 'G')) ) {
                n += 1;
            }
            else if (s1[i] != s2[i]) {
                break;
            }
        }

        if (n == j) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}