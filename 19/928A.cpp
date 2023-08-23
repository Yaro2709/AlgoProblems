#include<iostream>
#include<vector>

using namespace std;

int main()
{
    string login, z;
    int n;
    vector <string> logs;
    bool ans = false;
    cin >> login;
    cin >> n;
    logs.push_back(login);

    for (int i = 1; i < n + 1; ++i) {
        cin >> z;
        logs.push_back(z);
    }
    for (int i = 0; i < n + 1; ++i) {
        for (int x = 0; x < logs[i].size(); ++x) {
            if (((logs[i])[x] >= 'a') && ((logs[i])[x] <= 'z')) {
                logs[i][x] = char(int(logs[i][x]) - 32);
            }
            if ((logs[i])[x] == '0') {
                logs[i][x] = 'O';
            }
            if ((logs[i][x] == 'l') || (logs[i][x] == 'L')) {
                logs[i][x] = '1';
            }
            if ((logs[i][x] == 'I') || (logs[i][x] == 'i')) {
                logs[i][x] = '1';
            }
        }
    }

    for (int i = 1; i < n + 1; ++i) {
        if (logs[i] == logs[0]) {
            ans = true;
            break;
        }
    }
    if (ans == true) {
        cout << "No";
    }
    else {
        cout << "Yes";
    }

    return 0;
}
