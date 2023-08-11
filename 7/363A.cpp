#include<iostream>

using namespace std;

void out(int x)
{
    if (x >= 5) x -= 5, cout << "-O|";
    else cout << "O-|";
    if (x == 0) cout << "-OOOO";
    if (x == 1) cout << "O-OOO";
    if (x == 2) cout << "OO-OO";
    if (x == 3) cout << "OOO-O";
    if (x == 4) cout << "OOOO-";
    cout << endl;
}

int main()
{
    int a;
    cin >> a;
    do
    {
        out(a % 10);
        a /= 10;
    } while (a);

    return 0;
}