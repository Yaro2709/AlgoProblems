#include<iostream>

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

        int sum = 0;
        for (int i = 0; i < n; i++) {
            if ((a[i] == 1) || (a[i] == 3)) {
                sum += 1;
            }
        }

        cout << sum << endl;

        delete[] a;
    }

    return 0;
}