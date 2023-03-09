#include <iostream>

using namespace std;

int main() 
{
    int nRed;
    int nBlue;

    cin >> nRed;
    cin >> nBlue;

    int i = 0;
    while ((nRed > 0) && (nBlue > 0)) {
        i += 1;
        nRed -=1;
        nBlue -= 1;
    }

    int k = 0;
    if (nRed != 0) {
        k = nRed / 2;
    }
    else if (nBlue != 0) {
        k = nBlue / 2;
    }
    else {
        k = 0;
    }

    cout << i << endl;
    cout << k << endl;
    
    return 0;
}