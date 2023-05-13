#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> cards(n);
        for (int i = 0; i < n; i++) {
            cin >> cards[i];
        }

        int m;
        cin >> m;
        long long nshuffle = 0;

        for (int i = 0, x; i < m; i++) {
            cin >> x;
            nshuffle += x;
        }

        nshuffle %= n;
        cout << cards[nshuffle] << endl;
    }

    return 0;
}