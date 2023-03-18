#include<iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int* a = new int[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }

        int count = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                count += 1;
            }
        }

        if ((sum % 2 == 0) && ((count == 0) || (count == n))) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }

        delete[] a;
    }

    return 0;
}