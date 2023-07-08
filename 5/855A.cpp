#include<iostream>
#include<map>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    map<string, int> m;
    while (t--) {
        string s;
        cin >> s;

        if (m.count(s) == 0) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

        m[s]++;
    }

    return 0;
}