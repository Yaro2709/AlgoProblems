#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long res = 1;
        for (int i = 3; i <= 2 * n; i++) {
            res = res * i % 1000000007;
        }
        cout << res << endl;
    }

    return 0;
}