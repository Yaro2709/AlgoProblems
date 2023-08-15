#include <iostream>

using namespace std;

int main() {
    int arr[26] = { 0 };
    int n; 
    cin >> n;
    string s; 
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']++;
    }

    string ans = "";
    for (int i = 0; i < 26; i++) {
        if (arr[i] % n != 0 && arr[i] != 0) {
            cout << -1; 
            return 0;
        }
        else if (arr[i] % n == 0) {
            int k = arr[i] / n;
            while (k--) {
                ans += i + 'a';
            }
        }
    }
    while (n--) {
        cout << ans;
    }

    return 0;
}