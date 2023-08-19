#include<iostream>

using namespace std;

#define ll long long int

int main()
{
    ll n;
    cin >> n;
    ll temp = n, ctr = 0, no = 1;
    while (temp >= 10)
    {
        temp /= 10;  ctr++; no *= 10;
    }
    ll sum = ctr * 9;
    n -= (no - 1);
    while (n != 0)
    {
        sum += n % 10; n = n / 10;
    }
    cout << sum << endl;

    return 0;
}