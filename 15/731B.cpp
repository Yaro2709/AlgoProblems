#include<iostream>

using namespace std;

int main()
{
    int n, a, s = 0, d = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if ((a == 0) && (s == 1)) { d = 4; }
        else if ((s + a) % 2 == 0) { s = 0; }
        else { s = 1; }
    }
    if (d == 4) { cout << "NO"; }
    else if (s == 1) { cout << "NO"; }
    else { cout << "YES"; }

    return 0;
}