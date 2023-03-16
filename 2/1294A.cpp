#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int a[4];
        for (int j = 0; j < 4; j++) {
            cin >> a[j];
        }

        int max = 0;
        for (int j = 0; j < 3; j++) {
            if (a[j] > max) {
                max = a[j];
            }
        }

        for (int j = 0; j < 3; j++) {
            a[j] = max - a[j];
        }

        for (int j = 0; j < 3; j++) {
            a[3] -= a[j];
        }

        int flag = 0;
        if (a[3] % 3 == 0) {
            flag = 1;
        }
        else {
            flag = 0;
        }

        if ((flag == 1) && (a[3] >= 0)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}