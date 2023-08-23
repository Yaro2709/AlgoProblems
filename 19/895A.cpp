#include<iostream>

using namespace std;

int a[900];

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 900;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += a[j];
            ans = min(ans, abs(360 - 2 * sum));
        }
    }
    cout << ans << endl;

    return 0;
}