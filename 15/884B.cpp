#include<iostream>

using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;
    int p;
    int *a = new int[n + 1];
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> p;
        sum += p;
    }
    sum += (n - 1);
    if (sum == x)cout << "YES\n";
    else cout << "NO\n";

    delete[] a;

    return 0;
}