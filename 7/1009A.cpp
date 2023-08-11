#include<iostream>

using namespace std;

int game[1003], wallet[1003], i, j, n, m;
int main() {
    cin >> n >> m;
    for (i = 0; i < n; i++)cin >> game[i];
    for (i = 0; i < m; i++)cin >> wallet[i];
    for (i = 0; i < n; i++)
        if (wallet[j] >= game[i])
            j++;
    cout << j;

    return 0;
}