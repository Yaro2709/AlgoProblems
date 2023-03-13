#include <iostream>

using namespace std;

int main() 
{
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s; 
        cin >> s;

        int flag = 1;
        for (int i = 0; i < n - 1; i++) {
            if (flag == 0) {
                break;
            }

            while (s[i] == s[i + 1]) { 
                i++;
            }

            for (int j = i + 1; j < n; j++) {
                if (s[j] == s[i]) {
                    flag = 0;
                    break;
                }
            }
        }

        if (flag == 0) {
            cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}