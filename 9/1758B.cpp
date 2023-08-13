#include <iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        if (n & 1)
            for (int i = 1; i <= n; i++) cout << "114514 ";
        else {
            for (int i = 1; i <= n - 2; i++) cout << "2 ";
            cout << "1 3 ";
        }
        cout << '\n';
    }

    return 0;
}