#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, t = 0;
    cin >> n;
    vector <int> a(n);
    vector <int> b(n);
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cin >> k;
        if (a[k] > t) {
            cout << a[k] - t << " ";
            t = a[k];
        }
        else
            cout << 0 << " ";
    }

    return 0;
}