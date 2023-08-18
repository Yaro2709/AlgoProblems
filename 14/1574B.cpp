#include<iostream>
#include<algorithm>

using namespace std;

int main() {
    int t, i, j, k, n, a, b, c, m, mi, ma, pr;
    cin >> t;
    while (t--) {
        cin >> a >> b >> c >> m;
        char *str = new char[a + b + c];
        int arr[3] = { a,b,c };
        sort(arr, arr + 3);
        ma = a + b + c - 3;


        pr = 0, mi = 0;
        mi = arr[2] - arr[0] - arr[1] - 1;


        if (m >= mi && m <= ma) {
            cout << "yes" << "\n";
        }
        else {
            cout << "no" << "\n";
        }

        delete[] str;
    }

    return 0;
}