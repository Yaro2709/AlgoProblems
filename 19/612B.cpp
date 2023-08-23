#include<iostream>

using namespace std;

int main()
{
    int n, idx[200000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        idx[--x] = i;
    }
    int now = n;
    long long res = 0ll;
    while (--now) res += abs(idx[now] - idx[now - 1]);
    cout << res;

    return 0;
}