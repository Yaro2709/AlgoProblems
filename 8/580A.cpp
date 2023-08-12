#include <iostream>

using namespace std;

int a[10000];

int main() {
    int n;
    cin >> n;
    long int max1 = 1, max = 1;
    long int* arr = new long int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i >= 1)
        {
            if (arr[i] >= arr[i - 1])
            {
                max1++;
            }
            else
            {
                if (max1 > max)
                    max = max1;
                max1 = 1;
            }
        }
    }
    if (max1 > max)
        cout << max1;
    else
        cout << max;

    delete[] arr;

    return 0;
}