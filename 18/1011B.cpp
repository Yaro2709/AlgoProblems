#include<iostream>

using namespace std;

int cnt[1000] = { 0 };
int a;

int ok(int i)
{
    int p, q, r, j, k;
    p = 0;
    for (j = 1; j <= 100; j++)
    {
        p += cnt[j] / i;
    }
    if (p >= a)
        return true;
    else return false;
}

int main()
{
    int b, c, d, i, j, k, l, a1[1000];
    cin >> a >> b;
    for (i = 0; i < b; i++)
    {
        cin >> a1[i];
        cnt[a1[i]]++;
    }
    i = 1;
    while (ok(i))
    {
        i++;
    }
    cout << i - 1;

    return 0;
}