#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--) {
        int a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }

        int max = 0;
        int max_i = 0;
        for (int i = 0; i < 3; i++) {
            if (max < a[i]) {
                max = a[i];
                max_i = i;
            }
        }

        int min = INT_MAX;
        int min_i = 0;
        for (int i = 0; i < 3; i++) {
            if (min > a[i]) {
                min = a[i];
                min_i = i;
            }
        }

        for (int i = 0; i < 3; i++) {
            if ((i != min_i) && (i != max_i)) {
                cout << a[i] << endl;
            }
        }
    }

    return 0;
}