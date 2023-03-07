#include <iostream>

using namespace std;

int main() {
    
    int number;

    cin >> number;

    int* a = new int[number];

    int numberR = 0;
    for (int i = 0; i < number; i++) {
        cin >> a[i];
        if (i == 0) {
            numberR += 1;
        }
        else if(a[i-1] != a[i]) {
            numberR += 1;
        }
    }

    cout << numberR << endl;

    delete[] a;
}