#include<iostream>

using namespace std;

int main() 
{
    int t;	
    cin >> t; 

    while (t--)
    {
        int a;
        cin >> a;

        int b;
        cin >> b;

        int x;
        x = max((min(a, b) * 2), (max(a, b)));

        cout << x * x << endl;
    }

    return 0;
}