#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        char *a = new char[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        string s = "YES";
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j += 2) {
                if (a[i] == a[j]) {
                    s = "NO";
                    break;
                }
            }
        }

        cout << s << endl;

        delete[] a;
    }

    return 0;
}