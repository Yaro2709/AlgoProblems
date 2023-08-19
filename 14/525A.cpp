#include<iostream>

using namespace std;

int arr[26] = { 0 };

int main()
{
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n - 1; i++)
    {
        arr[s[2 * i] - 'a']++;
        if (arr[s[(2 * i) + 1] - 'A'])
            arr[s[(2 * i) + 1] - 'A']--;
        else
            ans++;
    }

    cout << ans << endl;

    return 0;
}