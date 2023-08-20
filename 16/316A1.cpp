#include <iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int array[127] = { 0 };
    unsigned long long count = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 65 && s[i] <= 90)
            array[s[i]]++;
        if (s[i] == 63 && i != 0)
            count *= 10;
        else if (s[i] == 63)
            count *= 9;
    }
    int nod = 0;
    for (int i = 65; i <= 90; i++) {
        if (array[i] >= 1) {
            nod++;
        }
    }
    int c = 10;
    if (s[0] >= 65 && s[0] <= 90) { count *= 9; nod--; c = 9; }
    while (nod--) {
        count *= c;
        c--;
    }
    cout << count << endl;

    return 0;
}