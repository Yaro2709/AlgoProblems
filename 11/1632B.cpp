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
        int max = 1;
        for (; max < n; max *= 2);
        max /= 2;
        for (int i = max - 1; i >= 0; i--)
            cout << i << " ";
        for (int i = max; i < n; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}