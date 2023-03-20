#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int a, b, c;
        cin >> a >> b >> c;

        int count = 0;
        while (a <= c && b <= c) {
            if (a > b) {
                b += a;
            }
            else {
                a += b;
            }
            count++;
        }
        cout << count << endl;
    }

    return 0;
}