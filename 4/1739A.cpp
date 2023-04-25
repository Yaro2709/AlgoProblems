#include<iostream>

using namespace std;

#define ll long long

void testCase() 
{
    ll n, m;
    cin >> n >> m;
    cout << (n + 1) / 2 << " " << (m + 1) / 2 << endl;
}

int main() 
{
    ll t;
    cin >> t;
    while (t--) { 
        testCase(); 
    }

    return 0;
}