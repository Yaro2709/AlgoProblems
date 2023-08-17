#include<iostream>

using namespace std;

int a[1100000];

int main() {
    int n;
    cin >> n;
    int et = 0;
    int etv = 0;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        a[x]++;
        if (a[x] > etv)
        {
            etv = a[x];
            et = x;
        }
    }
    cout << et << endl;

    return 0;
}