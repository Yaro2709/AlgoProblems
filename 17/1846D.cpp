#include<iostream>
#include<iomanip>

using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; double d, h; cin >> n >> d >> h;
        double a[n + 1];
        for (int i = 0; i < n; i++) cin >> a[i];
        a[n] = a[n - 1] + h;
        double s = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            double hei = (a[i + 1] - a[i] < h) ? a[i + 1] - a[i] : h;
            double bas = d * (1 - hei / (2 * h));
            s += bas * hei;
        }
        cout << setprecision(7) << fixed << s << endl;
    }

    return 0;
}