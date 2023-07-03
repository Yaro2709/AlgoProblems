#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int* a = new int[n];
        int *b = new int[n];
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        bool c = true;
        for (int i = 0; i < n; ++i) {
            if (a[i] + b[n - i - 1] > x) {
                c = false;
            }
        }

        if (c) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }

    return 0;
}