#include<iostream>
#include<math.h>

using namespace std;

int f(int x)
{
    if (x == 0)return 0;
    int a = sqrt(x);
    if (x == a * a)return 0;
    a = a + 1;
    a *= a;
    return a - x;
}

int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        int size = n;
        n--;
        while (n >= 0)
        {
            int a = f(n);
            for (int i = a; i <= n; i++)arr[i] = a + n - i;
            n = a - 1;
        }
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
        cout << endl;

        delete[] arr;
    }

    return 0;
}