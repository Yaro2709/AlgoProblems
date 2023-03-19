#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    string alfa = "abcdefghijklmnopqrstuvwxyz";

    while (t--) {
        int n;
        cin >> n;

        string name;
        cin >> name;

        int max = 0;
        for (int i = 0; i < n; i++) {
            int m = (alfa.find(name[i]) + 1);
            if (max < m) {
                max = m;
            }
        }
        cout << max << endl;
    }

    return 0;
}