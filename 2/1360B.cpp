#include<iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int *arr = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int x = 1000;
        for (int i = 0; i < n - 1; i++) {
            x = min(x, (arr[i + 1] - arr[i]));
        }

        cout << x << endl;
        
        delete[] arr;
    }

    return 0;
}