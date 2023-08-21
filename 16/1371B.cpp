#include<iostream>

using namespace std;

int main()
{
    long long int n, c, t, r;
    cin >> t;
    for (c = 0; c < t; c++)
    {
        cin >> n >> r;
        if (n > r)cout << (r * (r + 1)) / 2 << endl;
        else cout << ((n - 1) * n) / 2 + 1 << endl;
    }
    return 0;
}