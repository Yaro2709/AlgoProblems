#include<iostream>

using namespace std;

int main()
{
    int n; 
    cin >> n;
    string s; 
    cin >> s;

    int c1 = 0; 
    int c2 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'S' && s[i + 1] == 'F') c1++;
        if (s[i] == 'F' && s[i + 1] == 'S') c2++;
    }
    if (c1 > c2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
}