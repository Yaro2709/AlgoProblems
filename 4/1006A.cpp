#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    int a;
    for (int i = 1; i <= n; i++) {
        cin >> a;
        cout << a - 1 + (a % 2) << " ";
    }

    return 0;
}