#include<iostream>

using namespace std;

int main()
{
    int x, y, a, b, n = 0;
    cin >> x >> y >> a >> b;
    int i, j;
    for (i = a; i <= x; i++) {
        for (j = b; j <= y; j++) {
            if (i > j)
                n++;
        }
    }
    cout << n << endl;
    for (i = a; i <= x; i++) {
        for (j = b; j <= y; j++) {
            if (i > j)
                cout << i << " " << j << endl;
        }
    }
    return 0;
}