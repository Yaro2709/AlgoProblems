#include<iostream>

using namespace std;

int main()
{
    int a, b, n, h, h0;
    cin >> a; 
    cin >> b;
    n = a + b + 1;
    h = h0 = b + 1;
    cout << h << " ";
    for (int i = 1; i <= a; ++i)
    {
        ++h;
        cout << h << " ";
    }
    h = h0;
    for (int i = 1; i <= b; ++i)
    {
        --h;
        cout << h << " ";
    }

    return 0;
}