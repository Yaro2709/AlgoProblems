#include <iostream>
 
using namespace std;
 
int main() 
{
    int numberCout;
 
    cin >> numberCout;
 
    for (int i = 0; i < numberCout; i++) {
        int n;
 
        cin >> n;
 
        int* a = new int[n];
 
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
 
        int b = 0;
        int c = 0;
        int b_i = 0;
        int c_i = 0;
        int b_index = 0;
        int c_index = 0;
        int index = 0;
        for (int j = 0; j < n; j++) {
            if (b == 0) {
                b = a[j];
                b_i += 1;
                b_index = j;
            }
            else if ((c == 0) && (b != 0) && (a[j] != b)) {
                c = a[j];
                c_i += 1;
                c_index = j;
            }
            else if (a[j] == c) {
                c_i += 1;
            }
            else if (a[j] == b) {
                b_i += 1;
            }
 
            if (b_i > c_i) {
                index = c_index;
            }
            else if (b_i < c_i) {
                index = b_index;
            }
        }
 
        cout << (index + 1) << endl;
 
        delete[] a;
    }
 
    return 0;
}