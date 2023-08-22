#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n, m, i;
    cin >> n >> m;
    int* a = new int[n]; 
    int *b = new int[n];
    int sum, c, j;
    for (i = 0; i < n; i++)
        cin >> a[i];
    b[0] = 0;
    sum = a[0];
    for (i = 1; i < n; i++)
    {
        c = 0;
        sum = sum + a[i];
        int k = sum;
        sort(a, a + i);
        if (sum > m)
        {
            for (j = i - 1; j >= 0; j--)
            {
                k = k - a[j];
                c++;
                if (k <= m)
                    break;
            }
        }
        b[i] = c;
    }
    for (i = 0; i < n; i++)
        cout << b[i] << " ";

    delete[] a;
    delete[] b;

    return 0;
}