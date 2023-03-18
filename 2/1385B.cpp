#include<iostream>

using namespace std;

int main() 
{
    int t; 
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int* arr = new int[(n + 1)];
        for (int i = 0; i < (n+1); i++) {
            arr[i] = 0;
        }

        for (int i = 0; i < 2 * n; i++) {
            int p;
            cin >> p;
            if (arr[p] == 0) {
                cout << p << endl;
                arr[p] = 1;
            }
        }

        delete[] arr;
    }

    return 0;
}