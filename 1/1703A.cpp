#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string test;
        cin >> test;

        int flag[3] = { 0 };
        if ((test[0] == 'Y') || (test[0] == 'y')) {
            flag[0] = 1;
        }
        if ((test[1] == 'E') || (test[1] == 'e')) {
            flag[1] = 1;
        }
        if ((test[2] == 'S') || (test[2] == 's')) {
            flag[2] = 1;
        }

        if ((flag[0] == 1) && (flag[1] == 1) && (flag[2] == 1)) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}