#include<iostream>

using namespace std;

int a[3];

int main()
{
    int n;
    cin >> n;
    int *b = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[0] > 25) { cout << "NO" << endl; return 0; }
        if (b[i] == 25) a[0]++;
        else if (b[i] == 50) { a[1]++; a[0]--; }
        else if (b[i] == 100 && a[1] >= 1 && a[0] >= 1) { a[2]++; a[1]--; a[0]--; }
        else { a[2]++; a[0] -= 3; }
        if (a[0] < 0 || a[1] < 0 || a[2] < 0) { cout << "NO" << endl; return 0; }
    }
    cout << "YES" << endl;

    delete[] b;

    return 0;
}