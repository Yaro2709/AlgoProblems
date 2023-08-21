#include<iostream>
#include<algorithm>

using namespace std;

int a[10004];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    for (int i = 0; i <= 100; i++)
    {
        int cur = i + a[0];
        int c = 1;
        for (int j = 1; j < n; j++)
        {
            if (a[j] == cur)c++;
            else if (a[j] + i == cur)c++;
            else if (a[j] - i == cur)c++;
            else break;
        }
        if (c == n)
            return cout << i, 0;
    }
    cout << -1;

    return 0;
}