#include <iostream>
#include <algorithm>

using namespace std;

char a[10];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin >> a[1] >> a[2] >> a[3] >> a[4];

        sort(a + 1, a + 5);

        if (a[1] == a[2] && a[2] == a[3] && a[3] == a[4]) {
            cout << -1 << endl;
        }
        else
        {
            if ((a[1] == a[2] && a[2] == a[3]) || (a[2] == a[3] && a[3] == a[4])) {
                cout << 6 << endl;
            }
            else {
                cout << 4 << endl;
            }
        }
    }

    return 0;
}