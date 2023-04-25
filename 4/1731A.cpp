#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;

        long long int *a = new long long int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long int k = 1;
        for (int i = 0; i < n; i++) {
            k *= a[i];
        }

        k += n - 1;
        k *= 2022;
        cout << k << endl;

        delete[] a;
    }

    return 0;
}