#include<iostream>

using namespace std;

int main()
{
    string s; 
    cin >> s;
    int L = s.find('|');
    int n = s.size();
    int R = n - 1 - L;
    string t; 
    cin >> t;
    int k = 0, m = t.size();
    while (L < R and k < m) { s = t[k++] + s; L++; }
    while (L > R and k < m) { s += t[k++]; R++; }
    while (k < m) {
        s = t[k++] + s; L++;
        if (k >= m) break;
        s += t[k++]; R++;
    }
    cout << (L != R ? "Impossible" : s) << endl;

    return 0;
}