#include<iostream>

using namespace std;

int main()
{
    long long n, t, c, temp, res = 0;
    cin >> n >> t >> c;
    int prev = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp <= t && i - prev >= c)
            res++;
        else if (temp > t)
            prev = i;
    }
    cout << res << endl;

    return 0;
}