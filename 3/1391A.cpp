#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    while (n--) {
        int x;
        cin >> x;
        for (int i = 1; i <= x; i++) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}