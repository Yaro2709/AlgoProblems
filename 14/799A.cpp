#include<iostream>
#include<math.h>

using namespace std;

int main() {
    int n, t, k, d;
    cin >> n >> t >> k >> d;

    int x = (ceil((double)n / k) - 1) * t;
    if (d < x) cout << "YES";
    else cout << "NO";

    return 0;
}