#include<iostream>

using namespace std;

int main()
{
    char x[8][8]; int a = 0, b = 0;
    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            cin >> x[i][j];
    for (int i = 0; i < 8; i++) {
        int c = 0;
        for (int j = 0; j < 8; j++) if (x[i][j] == 'B') c++;
        if (c == 8) a++;
        else b = c;
    }
    cout << a + b << endl;

    return 0;
}