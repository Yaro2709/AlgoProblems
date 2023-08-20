#include<iostream>

using namespace std;

int main()
{
    int d, h, v, e;
    cin >> d >> h >> v >> e;
    double aob = (d * d * 3.141592654) / 4;
    double hd = v / aob;
    cout.precision(12);
    if (hd <= e)
        cout << "NO";
    else
        cout << "YES\n" << fixed << h / (hd - e);

    return 0;
}