#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;

    cin >> n;
    cin >> k;

    int *arrayMass = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> arrayMass[i];
    }

    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arrayMass[i] + k < 6) {
            counter += 1;
        }
    }

    cout << (counter / 3) << endl;

    delete[] arrayMass;

    return 0;
}