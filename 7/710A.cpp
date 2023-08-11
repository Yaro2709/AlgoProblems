#include<iostream>

using namespace std;

int main()
{
    char a, b;
    cin >> a >> b;
    if ((a == 'a' || a == 'h') && (b == '1' || b == '8'))
        cout << 3 << endl;
    else if (b == '1' || b == '8' || a == 'a' || a == 'h')
        cout << 5 << endl;
    else
        cout << 8 << endl;
    return 0;
}