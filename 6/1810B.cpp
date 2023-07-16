#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n % 2 == 0) {
            cout << -1 << endl;
            continue;
        }

        vector<int> v;
        while (n > 1) {
            if ((n / 2) & 1) {
                v.push_back(2);
            }
            else {
                v.push_back(1);
            }
            n /= 2;
        }

        reverse(v.begin(), v.end());

        cout << v.size() << endl;
        for (auto it : v) {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}