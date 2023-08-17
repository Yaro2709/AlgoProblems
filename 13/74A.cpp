#include<iostream>

using namespace std;

int main()
{
    int n, max, p, m, a, b, c, d, e;
    cin >> n;
    string s, ss;
    cin >> ss >> p >> m >> a >> b >> c >> d >> e;
    max = a + b + c + d + e + p * 100 - m * 50;
    for (int i = 1; i < n; i++)
    {
        cin >> s >> p >> m >> a >> b >> c >> d >> e;
        if ((a + b + c + d + e + p * 100 - m * 50) > max)
        {
            max = a + b + c + d + e + p * 100 - m * 50;
            ss = s;
        }
    }
    cout << ss << endl;

    return 0;
}