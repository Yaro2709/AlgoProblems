#include<iostream>

using namespace std;

int m[2000000] = { 0 };

int main()
{
    int h, a, c, x, y, i, j;
    cin >> h >> a >> c >> x >> y;
    for (i = 0; x > 0; i++)
    {
        if (h > y || a >= x)
        {
            x -= a;
            m[i] = 1;
        }
        else
            h += c;
        h -= y;
    }
    cout << i << endl;
    for (j = 0; j < i; j++)
    {
        if (m[j])
            cout << "STRIKE\n";
        else
            cout << "HEAL\n";
    }
    return 0;
}