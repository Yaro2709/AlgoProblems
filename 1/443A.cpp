#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <char>ss;
    char s;

    cin >> s;

    while (s != '}') {
        if (s >= 'a' && s <= 'z')
            ss.insert(s);
        cin >> s;
    }
    cout << ss.size();

    return 0;
}