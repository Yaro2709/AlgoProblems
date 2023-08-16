#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    int k;
    cin >> n;
    cin >> k;
    long long int *a = new long long int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    int i = 0;;
    int j = n - 1;
    int count = 0;
    while (i <= j) {
        int key = a[j];
        int mult = k / key;

        i = i + mult;
        if (i <= j) count++;
        j = j - 1;
    }
    cout << count << endl;

    delete[] a;

    return 0;
}