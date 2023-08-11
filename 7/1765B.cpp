#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c = 0;
        for (int j = 1; j < n; j = j + 3)
        {
            if (s[j] != s[j + 1])
                c = 1;
        }
        if (c == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
    return 0;
}