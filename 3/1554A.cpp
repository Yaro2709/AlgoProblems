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

        long long int *a = new long long int[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        long long int ans = 0;
        for (int i = 0; i < n; ++i) {
            if (i != 0) {
                ans = max(ans, a[i] * a[i - 1]);
            }
        }
        cout << ans << endl;

        delete[] a;
    }

    return 0;
}