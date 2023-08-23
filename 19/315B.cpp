#include<iostream>

using namespace std;

long long arr[100009];
long long int adder;

int main()
{
    long long int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < m; i++) {
        long long int t;
        cin >> t;
        if (t == 1) {
            long long int v, x;
            cin >> v >> x;
            arr[v - 1] = x - adder;
        }
        else if (t == 2) {
            long long int y;
            cin >> y;
            adder += y;
        }
        else {
            long long int q;
            cin >> q;
            cout << arr[q - 1] + adder << endl;
        }
    }
    return 0;
}