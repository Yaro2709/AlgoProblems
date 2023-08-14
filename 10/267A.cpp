#include <iostream>

using namespace std;

int main() 
{
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int a, b;
        cin >> a >> b;

        if (b > a) {
            int temp = a;
            a = b;
            b = temp;
        }
        long steps = 0;
        while (b != 0) {
            steps += a / b;
            int temp = a;
            a = b;
            b = temp % b;
        }
        cout << steps << endl;
    }

    return 0;
}