#include<iostream>

using namespace std;

#define ll long long

int main()
{
    ll n, x, y;
    cin >> n >> x >> y;
    n /= 2;
    if ((x == n || x == n + 1) && (y == n || y == n + 1))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }

    return 0;
}