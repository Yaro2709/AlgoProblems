#include<iostream>

using namespace std;

int d = 1, ar[2000];

int main()
{
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;
    s = s + ".";
    for (int i = 1; i <= s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            ar[s[i - 1]] += d / k;
            d = 1;
        }
        else
        {
            d++;
        }
    }
    int x = 0;
    for (int i = 0; i < 400; i++)
    {
        x = max(x, ar[i]);
    }
    cout << x;

    return 0;
}