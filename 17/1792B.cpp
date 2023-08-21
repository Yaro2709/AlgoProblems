#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans;
        if (b > c)
            swap(b, c);
        if (a == 0)
            ans = 1;
        else
        {
            ans = a + b;
            if (c <= a + b)
            {
                a = a + b - c;
                ans += c;
                if (a >= d)
                    ans += d;
                else
                    ans += a + 1;
            }
            else
                ans = 2 * ans + 1;
        }
        cout << ans << endl;
    }

    return 0;
}