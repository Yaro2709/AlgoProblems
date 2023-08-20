#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main()
{
    double y, ans = 0;
    int x;
    cin >> x >> y;
    double *arr = new double[x];
    for (int i = 0; i < x; i++) {
        cin >> arr[i];

    }
    sort(arr, arr + x);
    ans = arr[0] - 0;
    for (int i = 0; i < x - 1; i++) {
        if (((arr[i + 1] - arr[i]) / 2) > ans) {
            ans = ((arr[i + 1] - arr[i]) / 2);
        }
    }
    if (y - (arr[x - 1]) > ans)
        ans = y - (arr[x - 1]);
    cout << setprecision(10) << fixed << ans;

    delete[] arr;

    return 0;
}