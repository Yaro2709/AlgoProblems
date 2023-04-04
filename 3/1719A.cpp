#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        int sum = (n + m);
        if (sum % 2 == 0) {
            cout << "Tonya" << endl;
        }
        else {
            cout << "Burenka" << endl;
        }
    }

    return 0;
}