#include<iostream>

using namespace std;

int main()
{
    int a; cin >> a;

    while (a--)
    {
        int m; 
        cin >> m;

        int o, t;
        o = 0; t = 0; 

        for (int i = 0; i < m; i++) { 
            int l; 
            cin >> l; 

            if (l == 1) { 
                o++; 
            }
            else { 
                t++;
            }
        }

        if (t % 2 == 0 && o % 2 == 0) { 
            cout << "YES" << endl; 
        }
        else if (t % 2 == 1 && o >= 2 && o % 2 == 0) { 
            cout << "YES" << endl;
        }
        else { 
            cout << "NO" << endl;
        }
    }

    return 0;
}