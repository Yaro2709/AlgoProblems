#include<iostream>

using namespace std;

int a[30];

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
        a[s[i] - 'a']++;
    for (int i = 0; i < 27; i++)
        if (a[i] % 2)
            ans += a[i];
    if (ans % 2 || ans == 0)
        cout << "First" << endl;
    else
        cout << "Second" << endl;
    return 0;
}