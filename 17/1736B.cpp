#include<iostream>
#include<vector>

using namespace std;

long long int gcd(long long int a, long long int b)
{
    return b ? gcd(b, a % b) : a;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)cin >> v[i];
        bool check = 0;
        if (v.size() <= 2)cout << "YES\n";
        else {
            for (int i = 1; i < n - 1; i++) {
                if (v[i] % gcd(v[i - 1], v[i + 1]) != 0) {
                    check = 1; break;
                }
            }
            if (check)cout << "NO\n";
            else cout << "YES\n";
        }
    }

    return 0;
}