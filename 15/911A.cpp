#include<iostream>

using namespace std;

int ara[1000005];
int main()
{
    int n;
    cin >> n;
    int mn = 2e9;
    int ret = 2e9;
    int prv = -1e9;
    for (int i = 1; i <= n; i++) cin >> ara[i], mn = min(mn, ara[i]);
    for (int i = 1; i <= n; i++)
    {
        if (ara[i] == mn)
            ret = min(ret, i - prv), prv = i;
    }
    cout << ret << endl;
    return 0;
}