#include<iostream>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << "No";
        return 0;
    }
    cout << "Yes\n";
    cout << "1 " << n << "\n";
    cout << n - 1 << " ";
    for (long long int j = n - 1; j >= 1; j--) {
        cout << j << " ";
    }

    return 0;
}