#include <iostream>

using namespace std;

int main()
{
    int n, count = 0, total = 0, a[1001], i;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n; i++) {
        if (a[i] == 1)
            count++;
        else if (count != 0) {
            total += count + 1;
            count = 0;
        }
    }
    if (count != 0)
        total += count + 1;
    if (total == 0)
        total = 1;
    cout << total - 1 << endl;
    return 0;
}