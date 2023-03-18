#include<iostream>
#include <algorithm>

using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s; 
        cin >> s;

        sort(s.begin(), s.end());

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if (i != 0 && s[i] == s[i - 1]) { 
                sum += 1; 
            }
            else { 
                sum += 2; 
            }
        }

        cout << sum << endl;
    }

    return 0;
}