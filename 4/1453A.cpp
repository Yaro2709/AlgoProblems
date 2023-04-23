#include <iostream>
#include <set>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        set <int> s;
        for (int i = 0, x; i < n + m; i++) {
            cin >> x;
            s.insert(x);
        }

        cout << n + m - s.size() << endl;

        s.clear();
    }

    return 0;
}