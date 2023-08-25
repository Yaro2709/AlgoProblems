#include<iostream>

using namespace std;

int main()
{
    long long int a, b, c, i, j, k, n;
    string s, t;
    cin >> n >> s;
    for (i = 0; i < (n - 1); i++)
    {
        if (s[i] != s[i + 1])
        {
            t += s[i];
            t += s[i + 1];
            i++;
        }
    }

    cout << n - t.size() << endl;
    cout << t << endl;

    return 0;
}