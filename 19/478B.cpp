#include<iostream>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    long long int a, b;
    a = n - (m - 1);
    a = (a * (a - 1)) / 2;
    b = ((m - (n % m)) * ((n / m) * ((n / m) - 1)) / 2) + ((n % m) * ((((n / m) + 1) * ((n / m))) / 2));
    cout << b << " " << a << endl;

    return 0;
}