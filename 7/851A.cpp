#include<iostream>

using namespace std;

int main()
{
    int n, t, k;
    cin >> n >> k >> t;
    if (t <= k)
        cout << t;
    else if (t <= n)
        cout << k;
    else
        cout << k + n - t;

    return 0;
}