#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int *a = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    vector<int>v(n, -1);
    for (int i = 0; i < m; i++)
    {
        int x = a[i];
        for (int j = x - 1; j < n; j++)
        {
            if (v[j] == -1)
            {
                v[j] = x;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    delete[] a;

    return 0;
}