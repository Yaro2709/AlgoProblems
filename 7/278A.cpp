#include<iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int d[100];
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }

    int s, t;
    cin >> s >> t;
    s--; t--;

    int a, b;
    for (int i = s; i != t; i = (i + 1) % n) {
        a += d[i];
    }
    for (int i = t; i != s; i = (i + 1) % n) {
        b += d[i];
    }

    cout << min(a, b) << endl;

    return 0;
}