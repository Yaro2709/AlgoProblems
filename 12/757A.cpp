#include <iostream>

using namespace std;

int main()
{
    long long int i, l, a[200] = { 0 }, x = 0;
    string s;
    cin >> s;
    l = s.length();
    for (i = 0; i < l; i++)
    {
        a[s[i]]++;
    }
    x = min(a[66], a[117] / 2);
    x = min(x, a[98]);
    x = min(x, a[108]);
    x = min(x, a[97] / 2);
    x = min(x, a[115]);
    x = min(x, a[114]);
    cout << x;

    return 0;
}