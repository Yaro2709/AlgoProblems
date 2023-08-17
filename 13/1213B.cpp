#include<iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n]; 
        int k = 0;
        for (int i = 0; i < n; i++)cin >> a[i];
        int mini = a[n - 1], c = 0, d = 0;
        for (int i = n - 2; i >= 0; i--) {
            if (a[i] > mini)k++;
            else mini = a[i];
        }
        cout << k << endl;

        delete[] a;
    }

    return 0;
}