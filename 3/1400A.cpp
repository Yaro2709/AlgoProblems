#include<iostream>

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

        string w;
        for (int i = 0; i < 2 * n - 1; i += 2) {
            w += s[i];
        }
        cout << w << endl;
    }

    return 0;
}