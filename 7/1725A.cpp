#include <iostream>

using namespace std;

int main() {
    long long int n, m; 
    cin >> n >> m;
    if (n == 1 || m == 1)   cout << (n == 1 ? m - 1 : n - 1) << endl;
    else                    cout << (m - 1) * n << endl;

    return 0;
}