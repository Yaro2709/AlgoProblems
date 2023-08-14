#include <iostream>

using namespace std;

char prvo, poslednje;
char help[20];
int n, j;

int main()
{
    cin >> prvo >> poslednje >> n;

    if ((n % 4 == 0) || (n % 4 == 2)) {
        cout << "undefined" << endl;
    }
    else {
        help[0] = '^';
        help[1] = '>';
        help[2] = 'v';
        help[3] = '<';
        help[4] = '^';
        help[5] = '>';
        help[6] = 'v';
        help[7] = '<';

        n = n - ((n / 4) * 4);

        if (prvo == help[0]) {
            j = 0;
        }
        else if (prvo == help[1]) {
            j = 1;
        }
        else if (prvo == help[2]) {
            j = 2;
        }
        else {
            j = 3;
        }

        if (help[j + n] == poslednje) {
            cout << "cw" << endl;
        }
        else {
            cout << "ccw" << endl;
        }
    }

    return 0;
}