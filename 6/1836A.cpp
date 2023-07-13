#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>ar(100, 0);
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            ar[a]++;
        }
        bool fl = 1;
        for (int i = 1; i < 100; i++) {
            if (ar[i] > ar[i - 1]) { 
                fl = 0; 
                break; 
            }
        }
        (fl ? cout << "YES\n" : cout << "NO\n");
    }
}