#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        int x;
        cin >> x;
        int m;
        while (x)
        {
            m = x % 10;
            x /= 10;
            if (m == 7 || m == 4)
                c++;
        }
        if (c <= k) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}