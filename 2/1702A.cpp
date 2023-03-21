#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int tmp = n;
        int p = 1;
        while (tmp)
        {
            p *= 10;
            tmp /= 10;
        }
        p /= 10;
        cout << n - p << endl;
    }

    return 0;
}