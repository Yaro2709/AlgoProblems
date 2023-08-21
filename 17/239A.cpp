#include<iostream>

using namespace std;

int main()
{
    int y, k, n;
    cin >> y >> k >> n;
    int x = y / k + 1;
    int u = n / k;
    if (x <= u)
    {
        for (int i = x; i <= u; i++)
        {
            cout << k * i - y << " ";
        }
    }
    else {
        cout << -1;
    }

    return 0;
}