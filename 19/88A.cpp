#include<iostream>
#include<algorithm>

using namespace std;

int qwq(string s) {
    if (s == "C") return 1;
    else if (s == "C#") return 2;
    else if (s == "D") return 3;
    else if (s == "D#") return 4;
    else if (s == "E") return 5;
    else if (s == "F") return 6;
    else if (s == "F#") return 7;
    else if (s == "G") return 8;
    else if (s == "G#") return 9;
    else if (s == "A") return 10;
    else if (s == "B") return 11;
    else if (s == "H") return 12;
    else return 0;
}

int main() {
    string t;
    int a[3];
    cin >> t;
    a[0] = qwq(t);
    cin >> t;
    a[1] = qwq(t);
    cin >> t;
    a[2] = qwq(t);
    sort(a, a + 3);
    int ans = 0, tmp = 3;;
    while (!ans && tmp) {
        if (a[2] - a[0] == 7) {
            if (a[1] - a[0] == 4) {
                ans = 1;
            }
            if (a[1] - a[0] == 3) {
                ans = 2;
            }
        }
        a[0] += 12;
        sort(a, a + 3);
        tmp--;
    }
    if (ans == 1) {
        cout << "major";
        return 0;
    }
    if (ans == 2) {
        cout << "minor";
        return 0;
    }
    cout << "strange";
    return 0;
}