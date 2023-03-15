#include<iostream>

using namespace std;

int main() 
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int h;
        int m;

        cin >> h;
        cin >> m;

        int time = 1440 - ((h * 60) + m);

        cout << time << endl;
    }

    return 0;
}