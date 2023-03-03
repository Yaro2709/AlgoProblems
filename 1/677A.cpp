#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int numberFriends;
    int fenceHeight;

    cin >> numberFriends;
    cin >> fenceHeight;

    int* hFriends = new int[numberFriends];

    for (int i = 0; i < numberFriends; i++) {
        cin >> hFriends[i];
    }

    int hWay = 0;
    for (int i = 0; i < numberFriends; i++) {
        if (fenceHeight < hFriends[i]) {
            hWay += 2;
        }
        else if (fenceHeight >= hFriends[i]) {
            hWay += 1;
        }
    }

    cout << hWay << endl;
    
}