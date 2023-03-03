#include <iostream>

using namespace std;

int main() {

    int numberWay;

    cin >> numberWay;

    int* a = new int[numberWay];
    int* b = new int[numberWay];

    for (int i = 0; i < numberWay; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    int max = 0;
    int people = 0;
    for (int i = 0; i < numberWay; i++) {
        people += b[i] - a[i];
        if (people > max) {
            max = people;
        }
    }

    cout << max << endl;

    delete[] a;
    delete[] b;
}