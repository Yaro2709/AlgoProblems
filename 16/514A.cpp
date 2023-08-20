#include<iostream>

using namespace std;

int main()
{
    long long int x;
    cin >> x;

    long long int y = 0;
    int n = 0;
    while (x) {
        int a = x % 10;
        if (a > 4) a = 9 - a;

        y = y * 10 + a;
        x = x / 10;
        n += 1;
    }

    x = 0;
    int m = 0;
    while (m < n) {
        int a = y % 10;
        if (m == 0 && a == 0) a = 9;
        x = x * 10 + a;
        y = y / 10;
        m += 1;
    }
    cout << x;

    return 0;
}