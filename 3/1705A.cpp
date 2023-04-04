#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        int *arr = new int[2 * n];
        for (int i = 0; i < 2 * n; ++i) {
            cin >> arr[i];
        }

        sort(arr, arr + 2 * n);

        bool flag = 0;
        for (int i = 0, j = n; i < n; ++i, j++) {
            if (arr[j] - arr[i] < x) {
                flag = 1;
                break;
            }
        }

        if (flag)   cout << "NO"  << endl;
        else        cout << "YES" << endl;

    }

    return 0;
}