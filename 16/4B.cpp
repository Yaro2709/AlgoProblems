#include<iostream>

using namespace std;

int main() {
    int d, k;
    cin >> d >> k;
    int *mind = new int[d]; 
    int *maxd = new int[d];
    for (int i = 0; i < d; i++) {
        cin >> mind[i] >> maxd[i];
    }
    int mins = 0, maxs = 0;
    for (int i = 0; i < d; i++) {
        mins += mind[i];
        maxs += maxd[i];
    }
    if (k >= mins && k <= maxs) {
        cout << "YES" << endl;
        int n = k - mins, i = 0;
        for (int i = 0; i < d; i++) {
            int mn = min(n, maxd[i] - mind[i]);
            n -= mn;
            cout << mind[i] + mn;
            if (i != d - 1) {
                cout << " ";
            }
        }
    }
    else {
        cout << "NO";
    }

    delete[] mind;
    delete[] maxd;

    return 0;
}