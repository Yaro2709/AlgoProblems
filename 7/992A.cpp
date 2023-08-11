#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int>s;
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x != 0) s.insert(x);
    }
    cout << s.size();

    return 0;
}