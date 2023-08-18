#include<iostream>
#include<map>

using namespace std;

const int N = 2e5 + 10;
int a[N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        map<int, int>mp;
        int n, k;
        cin >> n >> k;
        int falg = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]] = 1;
            falg |= mp[a[i] - k];
            falg |= mp[a[i] + k];
        }
        if (falg)cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}