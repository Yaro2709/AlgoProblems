#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n]; 
    int *left = new int[n]; 
    int *right = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int dist = 2 * 100000;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            dist = 0;
        else
            dist++;
        left[i] = dist;
    }
    dist = 2 * 100000;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] == 0)
            dist = 0;
        else
            dist++;
        right[i] = dist;
    }
    for (int i = 0; i < n; i++)
        cout << min(left[i], right[i]) << ' ';

    delete[] arr;
    delete[] right;
    delete[] left;

    return 0;
}