#include <iostream>

using namespace std;

int a[101], A[101];

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c;
        cin >> n >> c;
        for (int k = 0; k <= 100; k++) {
            A[k] = 0;
        }
        for (int j = 1; j <= n; j++)
        {
            cin >> a[j - 1];
            A[a[j - 1]]++;
        }

        int S = 0;
        for (int k = 0; k <= 100; k++) {
            if (A[k] > c) {
                S = S + c;
            }
            else {
                S = S + A[k];
            }
        }

        cout << S << endl;
    }

    return 0;
}