#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k; 
        cin >> n >> k;
        int a, g;
        for (int i = 0; i < n; i++)
        {
            cin >> g;
            if (g >= k * 10) { 
                cout << "YES" << endl; continue; 
            }
            bool b = false; 
            a = g;
            while (a >= k)
            {
                if (a % k == 0) { 
                    b = true; 
                    break; 
                }
                a -= 10;
            }
            if (b) {
                cout << "YES" << endl; 
            }
            else { 
                cout << "NO" << endl; 
            }
        }
    }
    return 0;
}