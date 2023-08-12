#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int *p = new int[n + 1];
    for (i = 1; i <= n; i++)
        cin >> p[i];
    int count = 0, temp;
    for (i = 1; i <= n; i++)
    {
        temp = 0;
        j = i;
        while (p[j] != -1)
        {
            temp++;
            j = p[j];
        }
        count = max(count, temp + 1);
    }
    cout << count << endl;

    delete[] p;

    return 0;
}