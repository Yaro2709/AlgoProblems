#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        string s(200, 'a');
        cout << s << '\n';
        for (int i = 0; i < n; i++) {
            s[a[i]] = s[a[i]] == 'a' ? 'b' : 'a';
            cout << s << '\n';
        }
        delete[] a;
    }
    return 0;
}