#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int numberVictory;
    string victory;

    cin >> numberVictory;
    cin >> victory;

    int victoryAnton = 0;
    int victoryDanil = 0;

    for (int i = 0; i < numberVictory; i++) {
        if (victory[i] == 'A') {
            victoryAnton += 1;
        }
        else if (victory[i] == 'D') {
            victoryDanil += 1;
        }
    }

    if (victoryAnton == victoryDanil) {
        cout << "Friendship" << endl;
    }
    else if (victoryAnton > victoryDanil) {
        cout << "Anton" << endl;
    }
    else if (victoryAnton < victoryDanil) {
        cout << "Danik" << endl;
    }
}