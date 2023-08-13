#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < i; j++)cout << "0 ";
            cout << "1 1 ";
            for (int j = i + 2; j < n; j++)cout << "0 ";
            cout << "\n";
        }
        cout << "1 ";
        for (int j = 1; j < n - 1; j++)cout << "0 ";
        cout << "1\n";
    }

    return 0;
}