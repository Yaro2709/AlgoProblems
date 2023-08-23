#include<iostream>
#include<algorithm>

using namespace std;

#define M 10007

int main()
{
    long long n;
    cin >> n;
    long long *arr = new long long[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    long long pd = 0;
    long long i = 0, j = n - 1;
    while (i < n)
    {
        pd += (arr[i] * arr[j]) % M;
        pd = pd % M;
        i++;
        j--;
    }
    cout << pd;

    delete[] arr;

    return 0;
}