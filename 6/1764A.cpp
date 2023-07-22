#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *ar = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> ar[i];

        }
        cout << "1" << " " << n << endl;

        delete[] ar;
    }
    
    return 0;
}