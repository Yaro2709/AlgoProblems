#include <iostream>
#include <map>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s;
        cin >> s;

        map<int, char>mp;
        int temp = 0;
        for (int i = 0; i < n; i++) {
            if (mp.find(a[i]) != mp.end() && s[i] != mp[a[i]]) {
                temp = 1;
                break;
            }
            mp.insert({ a[i],s[i] });
        }

        if (!temp) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}