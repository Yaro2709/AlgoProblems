#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    char **a = new char*[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = new char[n];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int flag = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == '.') {
                if (a[i + 1][j - 1] == '.' && a[i + 1][j] == '.' && a[i + 1][j + 1] == '.' && a[i + 2][j] == '.' && j != 0 && j != n - 1 && i < n - 2) {
                    a[i][j] = '#';
                    a[i + 1][j - 1] = '#';
                    a[i + 1][j] = '#';
                    a[i + 1][j + 1] = '#';
                    a[i + 2][j] = '#';
                }
                else { 
                    cout << "NO"; flag = 1; 
                    break; 
                }
            }
        }
        if (flag == 1) {
            break;
        }
    }
    if (flag == 0) {
        cout << "YES";
    }

    for (int i = 0; i < n; i++)
    {
        delete[] a[i];
    }
    delete[] a;

    return 0;
}