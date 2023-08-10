#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int maxi = 0, mini;
        for (int i = 0; i < n; i++) maxi |= a[i];
        mini = a[0];
        for (int i = 1; i < n; i++) mini &= a[i];
        cout << maxi - mini << endl;

        delete[] a;
    }

    return 0;
}