#include <iostream>

using namespace std;

int main()
{
    int n, m;
 
    cin >> n >> m;

    string x(m - 1, '.'), y(m, '#');
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) {
            cout << y << endl;
        }
        else if (i % 4 == 0) {
            cout << '#' << x << endl;
        }
        else {
            cout << x << '#' << endl;
        }

    }

    return 0;
}