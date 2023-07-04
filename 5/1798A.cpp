#include<iostream>

using namespace std;

int a[222]; 
int b[222];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        bool ans = true;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] <= a[n - 1]) && (b[i] <= b[n - 1]))continue;
            if ((b[i] <= a[n - 1]) && (a[i] <= b[n - 1]))continue;
            ans = false;
        }

        if (ans) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}