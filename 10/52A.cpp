#include <iostream>

using namespace std;

int main()
{
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            x++;
        else if (a[i] == 2)
            y++;
        else
            z++;
    }
    cout << n - max(max(x, y), z);

    delete[] a;

    return 0;
}