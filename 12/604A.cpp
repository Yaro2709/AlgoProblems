#include <iostream>

using namespace std;

int main()
{
    int m[100], w[100], h[100];
    for (int i = 1; i <= 5; i++)
        cin >> m[i];
    for (int i = 1; i <= 5; i++)
        cin >> w[i];
    for (int i = 1; i <= 2; i++)
        cin >> h[i];
    cout << max(150, 500 - 2 * m[1] - 50 * w[1]) + max(300, 1000 - 4 * m[2] - 50 * w[2]) + max(450, 1500 - 6 * m[3] - 50 * w[3]) + max(600, 2000 - 8 * m[4] - 50 * w[4]) + max(3 * 250, 2500 - 10 * m[5] - 50 * w[5]) + 100 * h[1] - 50 * h[2] << endl;

    return 0;
}