#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    char c;
    int o = 0;
    int z = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> c;
        if (c == 'n') { 
            o++;
        }
        else if (c == 'z') {
            z++;
        }
    }
    for (int i = 1; i <= o; i++) { 
        cout << 1 << endl; 
    }
    for (int i = 1; i <= z; i++) { 
        cout << 0 << endl; 
    }

    return 0;
}