#include<iostream>

using namespace std;

#define ll long long int

int main() 
{
    ll t = 1;
    while (t--) {
        ll n;
        cin >> n;
        int a[100000];
        ll x;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> x;
                if (a[i] < x) {
                    a[i] = x;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == n - 1) {
                a[i] = n;
                break;
            }
        }
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
    }
    return 0;
}