#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int max = 0;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = 0; j < n; j++) {
                if (a[i] == a[j]) {
                    sum += 1;
                }
                if (sum > max) {
                    max = sum;
                }

            }
        }

        cout << max << endl;

        delete[] a;
    }

    return 0;
}