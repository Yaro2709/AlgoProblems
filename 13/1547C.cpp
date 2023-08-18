#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> k >> n >> m;
        int num, mx = INT_MIN, x = 0, sum = k, s = 0;
        vector <int> a;
        vector <int> b;
        vector <int> r;
        for (int i = 0; i < n; i++) {
            cin >> num;
            a.push_back(num);


        }
        for (int i = 0; i < m; i++) {
            cin >> num;
            b.push_back(num);

        }
        int c = 0, d = 0;
        while (c != n || d != m) {
            if (c != n && a[c] == 0) {
                r.push_back(0);
                k++;
                c++;
            }
            else if (d != m && b[d] == 0) {
                r.push_back(0);
                k++;
                d++;
            }
            else if (c != n && a[c] <= k) {
                r.push_back(a[c++]);
            }
            else if (d != m && b[d] <= k) {
                r.push_back(b[d++]);
            }
            else {
                cout << -1 << '\n';
                s = 1;
                break;

            }
        }

        if (s != 1) {
            for (int i = 0; i < n + m; i++) {

                cout << r[i] << " ";
            }
            cout << "\n";
        }
    }

    return 0;
}