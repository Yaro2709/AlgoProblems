#include <iostream>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;

        int s = 0;
        for (int i = 1; i < b.length(); i++)
        {
            int m = a.find(b[i]) - a.find(b[i - 1]);
            if (m > 0) {
                s = s + m;
            }
            else {
                s = s - m;
            }
        }
        cout << s << endl;
    }
    return 0;
}