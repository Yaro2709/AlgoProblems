#include <iostream>

using namespace std;

typedef long long int ll;

int main() {
    ll n; 
    cin >> n;
    ll g = n % 4;
    if (g == 1) cout << "0 A\n";
    if (g == 3) cout << "2 A\n";
    if (g == 2) cout << "1 B\n";
    if (g == 0) cout << "1 A\n";

    return 0;
}