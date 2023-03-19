#include <iostream>

using namespace std;

int main() 
{
    int n; 
    cin >> n;

    while (n--) {
        int a; 
        cin >> a;
        int b;
        cin >> b;
        int c;
        cin >> c;

        if ((c + abs(c - b)) == a) {
            cout << 3 << endl;
        }
        else if ((c + abs(c - b)) > a) {
            cout << 1 << endl;
        }
        else if ((c + abs(c - b)) < a) {
            cout << 2 << endl;
        }
    }

    return 0;
}