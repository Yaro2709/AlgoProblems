#include<iostream>
#include<map>

using namespace std;

int find(string a)
{
    if (a == "S")
        return 0;
    if (a == "M")
        return 1;
    if (a == "L")
        return 2;
    if (a == "XL")
        return 3;
    if (a == "XXL")
        return 4;
}

int main()
{
    int a[5], n;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    map < int, string > m;
    m[0] = "S";
    m[1] = "M";
    m[2] = "L";
    m[3] = "XL";
    m[4] = "XXL";
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        int index = find(s);
        int diff = max(index, 4 - index);
        for (int i = 0; i <= diff; i++)
        {
            if (index + i < 5 && a[index + i] > 0)
            {
                cout << m[index + i] << endl;
                a[index + i]--;
                break;
            }
            if (index - i >= 0 && a[index - i] > 0)
            {
                cout << m[index - i] << endl;
                a[index - i]--;
                break;
            }
        }

    }
    return 0;
}