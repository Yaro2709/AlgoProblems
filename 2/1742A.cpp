#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a; 
        int b;
        int c;

        cin >> a;
        cin >> b;
        cin >> c;

        int flag = 0;
        if ((a + b) == c) {
            flag = 1;
        }
        else if((a + c) == b) {
            flag = 1;
        }
        else if ((b + c) == a) {
            flag = 1;
        }

        if (flag == 1) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }

    return 0;
}