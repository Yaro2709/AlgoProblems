#include <iostream>

using namespace std;

int main() 
{
    int numberWork;
    int timeS;

    cin >> numberWork;
    cin >> timeS;

    int postWork = 0;
    int i = 0;
    while ((postWork + timeS <= 240)) {
        i += 1;
        postWork += i * 5;
    }
    i -= 1;

    if (i > numberWork) {
        i = numberWork;
    }

    cout << i << endl;
    
    return 0;
}