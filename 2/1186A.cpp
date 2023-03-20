#include <iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int k;
    cin >> k;

    if ((n <= m) && (n <= k)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    return 0;
}