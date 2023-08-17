#include<iostream>

using namespace std;

int main()
{
    int n, m, k = 0; 
    cin >> n >> m;
    int i1 = 1, i2 = 2, i3 = 2 * n + 1, i4 = i3 + 1;
    for (;;)
    {
        if (i3 <= m)
        {
            cout << i3 << " "; i3 += 2;
            k++; if (m == k) break;
        }
        if (i1 <= m)
        {
            cout << i1 << " "; i1 += 2;
            k++; if (m == k) break;
        }
        if (i4 <= m)
        {
            cout << i4 << " "; i4 += 2;
            k++; if (m == k) break;
        }
        if (i2 <= m)
        {
            cout << i2 << " "; i2 += 2;
            k++; if (m == k) break;
        }
    }

    return 0;
}