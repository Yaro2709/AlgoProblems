#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *x = new int[n];
    int *d = new int[n];
    int *y = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> d[i];
        y[i] = x[i] + d[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (y[i] == x[j] && y[j] == x[i])
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";

    delete[] x;
    delete[] d;
    delete[] y;

    return 0;
}