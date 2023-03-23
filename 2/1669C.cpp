#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int* a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int count_1 = 0;
        int count_2 = 0;
        int count_1_1 = 0;
        int count_1_2 = 0;
        int count_2_1 = 0;
        int count_2_2 = 0;
        for (int i = 0; i < n; i++) {
            if(i % 2 == 0){
                if (a[i] % 2 == 0) {
                    count_1_1 += 1;
                }
                else if (a[i] % 2 != 0) {
                    count_1_2 += 1;
                }
                count_1 += 1;
            }
            else if(i % 2 != 0) {
                if (a[i] % 2 == 0) {
                    count_2_1 += 1;
                }
                else if (a[i] % 2 != 0) {
                    count_2_2 += 1;
                }
                count_2 += 1;
            }
        }

        if ( 
             (((count_1_1 == count_1) || (count_2_1 == count_2)) && ((count_1_2 == count_1) || (count_2_2 == count_2))) 
                || 
             (((count_1_1 == count_1) || (count_2_2 == count_2)) && ((count_1_2 == count_1) || (count_2_1 == count_2)))
        ) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}