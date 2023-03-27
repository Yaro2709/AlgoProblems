#include<iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {        
        long long int* a = new long long int[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }

        long long int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += a[i];
        }

        cout << (sum/2) << endl;

        delete[] a;
    }

    return 0;
}