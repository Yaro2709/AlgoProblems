#include<iostream>

using namespace std;

int main()
{
    int k, a, b;
    cin >> k >> a >> b;
    long long  n;
    if ((a / k == 0) && (b % k != 0))
        cout << -1;
    else if ((b / k == 0) && (a % k != 0))
        cout << -1;
    else
        cout << a / k + b / k;
    return 0;
}