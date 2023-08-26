#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long int *a = new long long int[n]; 
    long long int *b = new long long int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i])ans++;
    }
    if (ans <= 2)cout << "YES" << endl;
    else cout << "NO" << endl;

    delete[] a;
    delete[] b;

    return 0;
}