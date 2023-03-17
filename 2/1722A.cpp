#include<iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string name;
        cin >> name;

        int flag_T = 0;
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'T') {
                flag_T += 1;
            }
        }

        int flag_i = 0;
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'i') {
                flag_i += 1;
            }
        }

        int flag_m = 0;
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'm') {
                flag_m += 1;
            }
        }

        int flag_u = 0;
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'u') {
                flag_u += 1;
            }
        }

        int flag_r = 0;
        for (int i = 0; i < name.size(); i++) {
            if (name[i] == 'r') {
                flag_r += 1;
            }
        }

        if ((flag_T == 1) && (flag_i == 1) && (flag_m == 1) && (flag_u == 1) && (flag_r == 1) && (n == 5)) {
            cout << "YES" << endl;
        }
        else {
             cout << "NO" << endl;
        }
    }

    return 0;
}