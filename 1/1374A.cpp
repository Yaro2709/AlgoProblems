#include <iostream>

using namespace std;

int main() 
{
    int t, x, y, n;
    cin >> t;

    while (t--) {
        cin >> x >> y >> n;
        cout << (n - y) / x * x + y << endl;
    }

    return 0;
}