#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n1;
        cin >> n1;

        int n2;
        cin >> n2;

        int *a = new int[n1];
        for (int i = 0; i < n1; i++) {
            cin >> a[i];
        }

        int* b = new int[n2];
        for (int i = 0; i < n2; i++) {
            cin >> b[i];
        }

        bool flag = 0;
        for (int i = 0; i < n1; i++) {
            for (int j = 0; j < n2; j++) {
                if (a[i] == b[j]) {
                    if (flag == 0) {
                        cout << "YES" << endl;
                        cout << 1 << " " << a[i] << endl;
                    }
                    flag = 1;
                }
            }
        }
        if (flag == 0) {
            cout << "NO" << endl;
        }

        delete[] a;
        delete[] b;
    }

    return 0;
}