#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int spec = 3;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        if (a == spec)
        {
            cout << "NO" << endl;
            return 0;
        }
        spec = 6 - a - spec;
    }
    cout << "YES" << endl;

    return 0;
}