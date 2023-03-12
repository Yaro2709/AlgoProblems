#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;
        
        int even = 0; 
        int odd = 0;
        int arr[40];
        for (int i = 0; i < n; i++) 
        {
            cin >> arr[i];
            if (i % 2 != arr[i] % 2) 
            {
                if (arr[i] % 2) 
                { 
                    odd++; 
                }
                else {
                    even++;
                }
            }
        }

        if (even == odd) { 
            cout << even << endl; 
        }
        else {
            cout << -1 << endl;
        }
    }

    return 0;
}