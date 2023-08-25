#include<iostream>

using namespace std;

#define ll long long

int main()
{
    ll n; cin >> n;
    ll m = n / 2;
    n--;
    ll sum = 1;
    while (n > 1) { sum *= n; n--; }
    cout << sum / m << endl;

    return 0;
}