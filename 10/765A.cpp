#include <iostream>

using namespace std;

int main()
{
    size_t n;
    cin >> n;
    string str;
    cin >> str;

    for (size_t i = 0; i < n; i++)
    {
        cin >> str;
    }

    if (n % 2 == 0)
    {
        cout << "home" << endl;
    }
    else
    {
        cout << "contest" << endl;
    }

    return 0;
}