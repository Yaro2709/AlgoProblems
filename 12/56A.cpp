#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, ct = 0;
    cin >> n;
    string s;
    vector<string> v = { "ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE","0","1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17" };
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s.size() < 20)
        {
            for (auto val : v)
            {
                if (val == s)
                {
                    ct++;
                    break;
                }
            }
        }

    }
    cout << ct;

    return 0;
}