#include <iostream>

using namespace std;

long long int h[305];

int main()
{
    long long int p, n;
    cin >> p >> n;
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x; 
        x %= p;
        if (h[x]) {
            cout << i << endl;
            return 0;
        }
        h[x]++;
    }
    cout << -1;

    return 0;
}