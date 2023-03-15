#include<iostream>
#include <cstring>

using namespace std;

int main()
{
    
    int a;
    int b;

    cin >> a;
    cin >> b;

    int flag = 0;
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (flag == 1) {
                break;
            }

            string test;
            cin >> test;

            if ((test == "C") || (test == "M") || (test == "Y")) {
                flag += 1;
            }
        }
    }

    if (flag > 0) {
        cout << "#Color" << endl;
    }
    else {
        cout << "#Black&White" << endl;
    }

    return 0;
}