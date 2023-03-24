#include <iostream>

using namespace std;

int main() 
{
    int t;;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;

        int *a = new int[n];

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int sum = 0;
        int flag = 0;
        int pos;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 1 && flag == 0) {
                flag = 1;
                pos = i;
                continue;
            }

            if (a[i] == 1 && flag == 1) {
                sum += i - pos - 1;
                pos = i;
            }
        }

        cout << sum << endl;

        delete[] a;
    }

    return 0;
}