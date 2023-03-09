#include <iostream>

using namespace std;

int main() 
{
    int n;
    
    cin >> n;
    
    int* a = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x = 0, l = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            l += a[i];
        }
        else if (a[i] < 0 && l > 0) {
            l--;
        }
        else {
            x++;
        }
    }

    cout << x << endl;

    delete[] a;

    return 0;
}