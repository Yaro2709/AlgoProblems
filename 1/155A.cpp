#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int max = 0;
    int min = 0;
    
    int pValue;

    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> pValue;
        if (i == 0) {
            max = pValue;
            min = pValue;
        }
        else {
            if (pValue < max) {
                max = pValue;
                sum++;
            }
            else if (pValue > min) {
                min= pValue;
                sum++;
            }
        }
    }

    cout << sum << endl;

    return 0;
}