#include <iostream>

using namespace std;

int main() {

    int n, x, y;
    cin >> n >> x >> y;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        int flag = 1;
        int e = min(n - 1, i + y);
        int s = max(0, i - x);
        for (int j = s; j <= e; j++)
        {

            if (a[j] < a[i])
            {
                flag = 0;  break;
            }
        }

        if (flag == 1)
        {
            cout << i + 1 << endl;
            break;
        }
    }

    delete[] a;

    return 0;
}