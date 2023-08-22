#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<string>s(n);
    map<string, int>mp;
    for (int i = 0; i < n; i++) {
        cin >> s[i];
        mp[s[i]]++;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (mp[s[i]]) {
            cout << s[i] << "\n";
            mp[s[i]] = 0;
        }
    }

    return 0;
}