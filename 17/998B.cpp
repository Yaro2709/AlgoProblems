#include<iostream>
#include<algorithm>

using namespace std;

int a[200];
int c[200];

int main()
{
    int n, b, j = 0, e = 0, o = 0, x = 0, l = 0;
    cin >> n >> b;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] % 2)
            o++;
        else
            e++;
        if (x)
        {
            x = 0;
            c[l++] = abs(a[i] - a[i - 1]);
        }
        if (e == o)
        {
            x = 1;
        }
    }
    sort(c, c + l);
    while (j < l && b >= c[j])
    {
        b -= c[j++];
    }
    cout << j << endl;

    return 0;
}