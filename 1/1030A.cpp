#include <iostream>

using namespace std;

int main() {
    
    int number;

    cin >> number;

    int* people = new int[number];

    for (int i = 0; i < number; i++) {
        cin >> people[i];
    }
    
    int flag = 0;
    for (int i = 0; i < number; i++) {
        if (people[i] == 1) {
            cout << "HARD" << endl;
            break;
        }
        if (people[i] == 0) {
            flag += 1;
        }
        if (flag == number) {
            cout << "EASY" << endl;
        }
    }

    delete[] people;
}