#include<iostream>

using namespace std;

int main()
{
    int n; cin >> n;
    int *a = new int[n + 10];
    for (int i = 1; i <= n; i++)a[i] = 0;
    int c = 1;
    for (int i = 2; i <= n; i++)
    {
        if (a[i] == 0)
        {
            for (int j = 1; j * i <= n; j++)
            {
                a[i * j] = c;
            }
            c++;
        }
    }
    for (int i = 2; i <= n; i++)cout << a[i] << ' '; cout << endl;

    delete[] a;

    return 0;
}