#include <iostream>
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

        int count = 1;
        int flag = 0;
        int name_i = 0;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] == a[i]) {
                count += 1;
                name_i = a[i];
            }
            else {
                count = 1;
            }

            if (count == 3) {
                flag = 1;
                break;
            }
        }

        if (flag) {
            cout << name_i << endl;
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}