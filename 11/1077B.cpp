#include <iostream>

using namespace std;

int main()
{
    long long int n, i, d = 0;
    cin >> n;
    long long int *x = new long long int[n];
    for (i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (i = 0; i < n - 2; i++) {
        if (x[i] == 1 && x[i + 1] == 0 && x[i + 2] == 1) {
            x[i + 2] = 0; d++;
        }
    }
    cout << d;

    delete[] x;

    return 0;
}