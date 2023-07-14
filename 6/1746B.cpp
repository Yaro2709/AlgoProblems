#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n;
        int* a = new int[n + 1];
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 1; i <= n; i++) {
            sum += a[i];
        }

        int cnt = 0;
        for (int i = n - sum; i >= 1; i--) {
            cnt += a[i];
        }

        cout << cnt << endl;

        delete[] a;
    }
    
    return 0;
}