#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r, c;
        cin >> x >> y >> r >> c;
        cout << max(x - r, r - 1) + max(y - c, c - 1) << endl;
    }
    return 0;
}