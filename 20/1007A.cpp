#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() 
{
    int i, n;
    cin >> n;
    vector<int>arr(n);
    for (i = 0; i < n; i++)cin >> arr[i];
    sort(arr.begin(), arr.end());
    int j = 0, ct = 0;
    for (i = 1; i < n; i++) {
        if (arr[j] < arr[i])j++, ct++;
    }
    cout << ct;

    return 0;
}