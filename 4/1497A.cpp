#include <iostream>
#include <map>
#include <vector>
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
        map<int, int>m;
        vector<int>v1;
        vector<int>v2;

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++) {
            if (m[arr[i]] == 0)
                v1.push_back(arr[i]);
            else
                v2.push_back(arr[i]);
            m[arr[i]]++;
        }

        sort(v1.begin(), v1.end());

        for (int i = 0; i < v1.size(); i++) {
            cout << v1[i] << " ";
        }

        for (int i = 0; i < v2.size(); i++) {
            cout << v2[i] << " ";
        }

        cout << endl;

        delete[] arr;
    }

    return 0;
}