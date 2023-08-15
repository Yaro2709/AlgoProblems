#include <iostream>

using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    int a[205], b[205];
    for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
    for (int i = 0; i < n; i++)
    {
        int x1 = 0, y1 = 0, x2 = 0, y2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i] > a[j] && b[i] == b[j]) x1 = 1;
            if (a[i] < a[j] && b[i] == b[j]) x2 = 1;
            if (a[i] == a[j] && b[i] < b[j]) y1 = 1;
            if (a[i] == a[j] && b[i] > b[j]) y2 = 1;
        }
        if (x1 && x2 && y1 && y2) cnt++;
    }
    cout << cnt << endl;
    return 0;
}