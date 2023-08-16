#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int M = 0, w = 0;
    for (int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        M = max(a, M);
        if (M == i)w++;
    }
    cout << w;

    return 0;
}