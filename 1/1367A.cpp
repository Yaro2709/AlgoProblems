#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
   
    string *arrayMass = new string [n];
    for (int i = 0; i < n; i++) {
        cin >> arrayMass[i];
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < arrayMass[j].size(); i++) {
            if ((i != 0) && (i % 2 == 0) && (i != (n - 1))) {
                //arrayMass[j][i] = '\0';
            }
            else {
                cout << arrayMass[j][i];
            }
        }
        cout << endl;
    }
    
    delete[] arrayMass;

    return 0;
}