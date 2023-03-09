#include <iostream>

using namespace std;

int main() 
{
    int r;
    int n; 
    
    cin >> n;
    cin >> r;

    for (int i = 1; i <= 10; i++)
    {
        if (n * i % 10 == 0 || ((n * i) - r) % 10 == 0)
        {
            cout << i; return 0;
        }
    }

    return 0;
}