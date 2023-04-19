#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        long long int p, a, b, c;
        cin >> p >> a >> b >> c;
        long long int ans = a;
        ans = min(ans, (a - (p % a)) % a);
        ans = min(ans, (b - (p % b)) % b);
        ans = min(ans, (c - (p % c)) % c);
        cout << ans << endl;
    }

    return 0;
}