#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin >> n >> r >> b;
        int k = r / (b + 1);
        int add = r % (b + 1);
        while (r) {
            int x = k + (add > 0);
            add = max(0, add - 1);
            r -= x;
            while (x--)

                cout << "R";
            if (b > 0) {

                cout << "B";
                --b;
            }
        }

        cout << endl;
    }

    return 0;
}