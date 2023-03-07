#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int* a = new int[n];
   
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = 101;
    int max = 0;

    int min_i = 0;
    int max_i = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] > max) {
            max = a[i];
            max_i = i;
        }

        if (a[i] <= min) {
            min = a[i];
            min_i = i;
        }
    }

    int pos = max_i + n - min_i - 1;
    if (min_i < max_i) {
        pos--;
    }

    cout << pos << endl;

    delete[] a;

    return 0;
}