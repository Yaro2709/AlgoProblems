#include <iostream>

using namespace std;

int main() {
    
    int numberFriends;
    int p;
    int newP[100];

    cin >> numberFriends;


    for (int i = 1; i <= numberFriends; i++) {
        cin >> p;
        newP[p] = i;
    }

    for (int j = 1; j <= numberFriends; j++) {
        cout << newP[j] << endl;
    }
}