#include<iostream>

using namespace std;

int main()
{
    long long int n, i, j, k, sum = 0, maxi = 0;
    cin >> n;
    long long int *A = new long long int[n + 1];
    for (i = 0; i < n; i++)
        cin >> A[i];
    if (n == 1 || n == 2)
    {
        cout << n;
        return 0;
    }
    long long int l = 2;
    for (i = 2; i < n; i++)
    {
        if (A[i] == (A[i - 1] + A[i - 2]))
            l++;

        else
        {
            maxi = max(maxi, l);
            l = 2;
        }

    }
    maxi = max(maxi, l);
    cout << maxi;

    delete[] A;

    return 0;
}