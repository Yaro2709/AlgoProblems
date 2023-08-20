#include<iostream>

using namespace std;

long long a[200004];

int main()
{
    long long int n;
    cin >> n;
    long long int s = 0;
    for (long long int i = 1; i <= n; i++)cin >> a[i];
    for (long long int i = 1; i < n; i++)
    {
        long long int p = 1;
        while (i + p <= n)p *= 2;
        cout << (s += a[i]) << endl;
        a[i + p / 2] += a[i];
    }

    return 0;
}