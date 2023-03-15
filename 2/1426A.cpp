#include<iostream>

using namespace std;

int main() 
{
    int t;
    for (cin >> t; t-- > 0;) 
    {
        int n, x;
        cin >> n >> x;

        if (n <= 2) { 
            cout << "1" << endl; 
        }
        else { 
            cout << 1 + (n - 2 + x - 1) / x << endl; 
        }
    }

    return 0;
}