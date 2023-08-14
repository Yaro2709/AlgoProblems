#include <iostream>

using namespace std;

int a[3];

int change(int i)
{
    if (i == 0) return a[i];
    int c1 = a[i] * change(i - 1);
    int c2 = a[i] + change(i - 1);

    return max(c1, c2);
}

int main()
{
    cin >> a[0] >> a[1] >> a[2];
    int c1 = change(2);
    swap(a[0], a[2]);
    int c2 = change(2);
    cout << max(c1, c2) << endl;

    return 0;
}