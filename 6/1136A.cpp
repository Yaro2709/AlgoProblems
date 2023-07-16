#include <iostream>

using namespace std;

int main()
{
    int n, b, c = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> b >> a[i];
    }
    cin >> b;
    int i = 0;
    while (b > a[i]) {
        c++;
        i++;
    }
    cout << n - c;

    delete[] a;

    return 0;
}