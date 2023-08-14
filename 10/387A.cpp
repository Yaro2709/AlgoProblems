#include <iostream>

using namespace std;

int main()
{
    int h, m1, m2;
    char c;
    cin >> h >> c >> m1;
    m1 += h * 60;
    cin >> h >> c >> m2;
    m2 += 60 * h;
    m1 -= m2;
    if (m1 < 0) m1 += 24 * 60;
    h = m1 / 60;
    int m = m1 % 60;
    if (h < 10) cout << "0";
    cout << h << ":";
    if (m < 10) cout << "0";
    cout << m << endl;

    return 0;
}