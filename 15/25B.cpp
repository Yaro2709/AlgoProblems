#include<iostream>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 3; i += 2) cout << s[i] << s[i + 1] << '-';
    if (n & 1) cout << s[n - 3];
    cout << s[n - 2] << s[n - 1] << endl;
    return 0;
}