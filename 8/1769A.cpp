#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i == 0) a[i] -= 1;
        else a[i] = max(a[i - 1] + 1, a[i] - i - 1);
        a[i] = max(a[i], 0);
    }
    for (int i = 0; i < n; i++) cout << a[i] << endl;

    delete[] a;

    return 0;
}