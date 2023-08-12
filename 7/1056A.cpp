#include <iostream>

using namespace std;

int b[101], ans;

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        int *s = new int[t];
        for (int i = 0; i < t; i++) {
            cin >> s[i];
            b[s[i]]++;
        }
        
        delete[] s;
    }
    for (int i = 0; i < 101; i++) {
        if (b[i] == n)
            cout << i << " ";

    }
    return 0;
}