#include<iostream>

using namespace std;

int main()
{
    int n, a[109], M = 0, sum;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        M = max(M, a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        sum = a[i];
        for (int j = i + 1; j < n; j++)
        {
            sum = (sum ^ a[j]);
            M = max(M, sum);
        }
    }
    cout << M << endl;

    return 0;
}