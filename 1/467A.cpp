#include <iostream>

using namespace std;

int main() {
    
    int number;

    cin >> number;

    int* number_life = new int[number];
    int* number_max = new int[number];

    for (int i = 0; i < number; i++) {
        cin >> number_life[i];
        cin >> number_max[i];
    }

    int counter = 0;
    for (int i = 0; i < number; i++) {
        if (number_max[i] - number_life[i] >= 2) {
            counter += 1;
        }
    }

    cout << counter << endl;

    delete[] number_life;
    delete[] number_max;
}