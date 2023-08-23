#include<iostream>

using namespace std;

long long arr[55], pr[6], co[6];
int n, m;

int main()
{
    cin >> n;
    int i, j;
    m = 5;
    for (i = 0; i < n; i++) cin >> arr[i];
    for (i = 0; i < m; i++) cin >> pr[i];
    long long mo = 0;
    for (i = 0; i < n; i++)
    {
        mo += arr[i];
        for (j = m - 1; j >= 0; j--)
        {
            if (mo < pr[j]) continue;
            long long re = mo % pr[j];
            long long x = mo / pr[j];
            co[j] += x;
            mo = re;
        }
    }
    for (i = 0; i < m; i++) cout << co[i] << " ";
    cout << endl;
    cout << mo << endl;

    return 0;
}