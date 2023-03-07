#include <iostream>

using namespace std;

int main() {

    double n;

    cin >> n;

    double proc = 0;
    double proc_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> proc;
        proc_sum += proc;
    }

    cout << ((proc_sum) / n) << endl;

    return 0;
}