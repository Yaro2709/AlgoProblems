#include<iostream>

using namespace std;

long long int d[1000010];
long long int res = 0;

int main() {
    long long int a, b, c;
    cin >> a >> b >> c;
    int t = a * b * c;
    for (int i = 1; i <= t; ++i)
        for (int j = 1; j * i <= t; ++j) d[i * j]++;
    for (int i = 1; i <= a; ++i)
        for (int j = 1; j <= b; ++j)
            for (int k = 1; k <= c; ++k)
                res = (res + d[i * j * k]) % 1073741824;
    cout << res;

    return 0;
}