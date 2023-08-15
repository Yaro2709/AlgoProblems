#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int** arr = new int* [n]; 
        for (int i = 0; i < n; i++)
        {
            arr[i] = new int[n];
        }

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n - 1; k++) cin >> arr[j][k];
        }
        int a;
        if (arr[0][n - 2] == arr[1][n - 2]) a = arr[0][n - 2];
        else a = arr[2][n - 2];
        for (int j = 0; j < n; j++) {
            if (arr[j][n - 2] != a) {
                for (int k = 0; k < n - 1; k++) cout << arr[j][k] << " ";
                cout << a << endl;
                break;
            }
        }

        for (int i = 0; i < n; i++)
        {
            delete[] arr[i]; 
        }
        delete[] arr; 
    }

    return 0;
}