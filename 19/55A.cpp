#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i *= 2)
    {
        if (i == n)
        {
            cout << "YES" << endl;

            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}