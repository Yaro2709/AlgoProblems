#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int *A = new int[n];
    for (int i = 0; i < n; i++)cin >> A[i];
    sort(A, A + n);
    for (int i = 0; i < n - 1; i += 2)
    {
        swap(A[i], A[i + 1]);
    }
    cout << (n - 1) / 2 << endl;
    for (int i = 0; i < n; i++)cout << A[i] << " ";
    cout << endl;

    delete[] A;

    return 0;
}