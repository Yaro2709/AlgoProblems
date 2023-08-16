#include <iostream>

using namespace std;

int main() {
    int t;  
    cin >> t;
    while (t--) {
        int n, m;  cin >> n >> m;
        int tot = n * m;
        cout << (tot / 3) + (tot % 3 != 0) << "\n";
    }

    return 0;
}