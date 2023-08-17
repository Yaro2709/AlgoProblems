#include<iostream>
#include<set>

using namespace std;

int main() {
    int t = 1; 
    cin >> t;
    while (t--)
    {
        int a, b; cin >> a >> b; set<int> row, col;
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < b; j++) {
                int x; cin >> x;
                if (x == 1) { row.insert(i); col.insert(j); }
            }
        }
        int count = min((a - row.size()), (b - col.size()));
        if (count % 2 == 0) cout << "Vivek" << endl;
        else cout << "Ashish" << endl;
    }

    return 0;
}