#include<iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int t; 
    cin >> t;

    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;

        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a, a + n);

        int flag = 1;
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1]) {
                flag = 0;
                break;
            }
        }

        if (flag == 0) {
            cout << "NO" << endl;
        }
        else if (flag == 1) {
            cout << "YES" << endl;
        }
    }

    return 0;
}