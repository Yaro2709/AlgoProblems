#include<iostream>
#include<algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int n, n1, n2;
    double sum1 = 0, sum2 = 0;
    cin >> n >> n1 >> n2;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (n1 > n2) swap(n1, n2);
    sort(a, a + n);
    for (int i = n - 1; i >= n - n1; i--) {
        sum1 += a[i];
    }
    for (int i = n - n1 - 1; i >= n - n1 - n2; i--) {
        sum2 += a[i];
    }
    cout << setprecision(8) << fixed << ((sum1 / n1) + (sum2 / n2));
    
    delete[] a;

    return 0;
}