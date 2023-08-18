#include<iostream>

using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t)
    {
        int n; 
        cin >> n;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int r; 
            cin >> r; if (r == 1)cnt++;
        }
        if (cnt > n / 2)
        {
            int k = (cnt % 2 == 0 ? cnt : cnt - 1);
            cout << k << endl;
            for (int i = 1; i <= k; i++)
                cout << 1 << " ";
            cout << endl;
        }
        else
        {
            cout << n - cnt << endl;
            for (int i = 0; i < n - cnt; i++)
                cout << 0 << " ";
            cout << endl;
        }
        t--;
    }

    return 0;
}