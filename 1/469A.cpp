#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n, i, a[103], b[103], p, q;
    cin >> n;

    set<int> c;

    cin >> p;

    for (i = 1; i <= p; i++)
    {
        cin >> a[i];
        c.insert(a[i]);
    }

    cin.get();
    cin >> q;

    for (i = 1; i <= q; i++)
    {
        cin >> b[i];
        c.insert(b[i]);
    }

    if (c.size() == n)
    {
        cout << "I become the guy.";
    }
    else {
        cout << "Oh, my keyboard!";
    }

    return 0;
}