#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

#define ll long long int

int main()
{
    ll t;
    cin >> t;
    ll tmp;
    vector<ll> v;
    ll n;
    for (int j = 0; j < t; j++)
    {
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> tmp;
            v.push_back(tmp);
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll A = 0, B = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                if (v[i] % 2 == 0) A += v[i];
            }
            else
            {
                if (v[i] % 2 == 1) B += v[i];
            }
        }
        if (A > B) cout << "Alice \n";
        else if (B > A) cout << "Bob \n";
        else cout << "Tie \n";
        v.clear();
    }
    return 0;
}