#include <iostream>

using namespace std;

int main()
{
    int n, m, p, c = 0, d = 0, a;
    cin >> n >> m >> p;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a == 1 && m != 0)
            m--;
        else if (a == 2 && p != 0)
            p--;
        else if (p == 0 && m != 0 && a == 2)
            m--;
        else
            c++;
    }
    cout << c;

    return 0;
}