#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int sum = 0, ans = 0;
    for (int i = 1; i < n; i++)
    {
        sum = arr[i] + arr[i - 1];
        if (sum < k)
        {
            ans += k - sum;
            arr[i] += k - sum;
        }
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}