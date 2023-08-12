#include <iostream>

using namespace std;

int main()
{
    long long int i, j, n, k, t, mx = 0;
    string s, s1;
    cin >> n;
    while (n--)
    {
        long long int a, b;
        cin >> a;
        cout << mx + a << " ";
        mx = max(mx, mx + a);
    }
    cout << endl;

    return 0;
}