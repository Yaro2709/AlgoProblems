#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int* a = new int[n];
    int* b = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        cin >> b[i];
    }

    int m = 0;
    int c = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) {
            m += 1;
        }
        else if (a[i] < b[i]) {
            c += 1;
        }
    }

    if (m > c) {
        cout << "Mishka" << endl;
    }
    else if (m < c) {
        cout << "Chris" << endl;
    }
    else if (m == c) {
        cout << "Friendship is magic!^^" << endl;
    }
    
    return 0;
}