#include <iostream>

using namespace std;

int main()
{
    int count;
    char arrayName[50];

    cin >> count;
    cin >> arrayName;
    
    int countOut = 0;
    for (int i = 0; i < count; i++) {
        if ((i != 0) && (arrayName[i - 1] == arrayName[i])) {
            countOut += 1;
        }
    }

    cout << countOut << endl;
}