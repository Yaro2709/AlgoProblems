#include <iostream>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--) {
        long long int s, a, b, c;
        cin >> s >> a >> b >> c;
        cout << s / c / a * b + s / c << endl;
    }
    return 0;
}