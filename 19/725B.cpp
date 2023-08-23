#include<iostream>

using namespace std;

int main()
{
    long long int n, ans = 0, i, j, k, c;
    char s;
    cin >> n >> s;
    k = n / 4; if (n % 4 == 0) k--;
    ans = k * 4;
    ans += k * 12;
    if (s == 'f') c = 1;
    if (s == 'e') c = 2;
    if (s == 'd') c = 3;
    if (s == 'a') c = 4;
    if (s == 'b') c = 5;
    if (s == 'c') c = 6;
    ans += c;
    if (n % 4 == 2 || n % 4 == 0) ans += 7;
    cout << ans << endl;

    return 0;
}