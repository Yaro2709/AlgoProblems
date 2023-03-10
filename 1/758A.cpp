#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
   
    int *arrayMass = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> arrayMass[i];
    }

    int max = 0;
    for (int i = 0; i < n; i++) {
        if (max < arrayMass[i]) {
            max = arrayMass[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += max - arrayMass[i];
    }

    cout << sum << endl;
    
    delete[] arrayMass;

    return 0;
}