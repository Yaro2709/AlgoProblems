#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            if (i + 1 > n) {
                cout << 1 << " ";
            }
            else {
                cout << i + 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}