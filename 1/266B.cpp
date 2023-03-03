#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int number;
    int time;
    string position;

    cin >> number;
    cin >> time;
    cin >> position;

    for (int i = 0; i < time; i++) {
        for (int j = 0; j < (number - 1); j++) {
            if ((position[j] == 'B') && (position[j + 1] == 'G')) {
                position[j] = 'G';
                position[j + 1] = 'B';
                j += 1;
            }
        }
    }

    cout << position << endl;
}