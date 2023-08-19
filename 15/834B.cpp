#include<iostream>
#include<set>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int last[26];
    for (int i = 0; i < n; i++) {
        last[s[i] - 'A'] = i;
    }
    set<int> act;
    for (int i = 0; i < n; i++) {
        if (last[s[i] - 'A'] >= i)
            act.insert(s[i] - 'A');
        if (act.size() > k) {
            cout << "YES";
            break;
        }
        if (last[s[i] - 'A'] == i)
            act.erase(s[i] - 'A');
    }
    if (act.size() <= k)
        cout << "NO";

    return 0;
}