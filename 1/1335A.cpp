#include <iostream>

using namespace std;

int main()
{
    int n, m;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> m;

        if (!(m % 2)) {
            m -= 1;
        }

        cout << m / 2 << endl;
    }

    return 0;
}