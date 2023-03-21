#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n, a[105];
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int m;
        string s;
        for (int i = 0; i < n; i++) {
            cin >> m >> s;
            for (int j = m - 1; j >= 0; j--) {
                if (s[j] == 'D') {
                    a[i] += 1; 
                    a[i] %= 10;
                }
                else { 
                    a[i] += 9;
                    a[i] %= 10; 
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    return 0;
}