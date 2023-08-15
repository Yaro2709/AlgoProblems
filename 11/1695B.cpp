#include <iostream>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int *a = new int[n];
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] < a[s])s = i;
        }

        if (n & 1)
        {
            cout << "Mike\n";
        }
        else
        {
            if (s & 1)cout << "Mike\n";
            else
                cout << "Joe\n";
        }

        delete[] a;
    }

    return 0;
}