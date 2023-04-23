#include <iostream>

using namespace std;

int main() 
{
    int long long t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int long long n, m;
        cin >> n >> m;
        cout << m * (m + 1) / 2 + m * (n + 1) * n / 2 - m << endl;
    }
    return 0;
}