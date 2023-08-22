#include<iostream>

#define ll long long int

using namespace std;

int main() {
    int n;
    ll sum1 = 0, sum2 = 0;
    ll x, y;
    cin >> n;
    int a, b;
    for (int i = 1; i <= 2 * n; i++) {
        cin >> a >> b;
        sum1 += a;
        sum2 += b;
    }
    x = sum1 / n;
    y = sum2 / n;
    cout << x << ' ' << y << endl;

    return 0;
}