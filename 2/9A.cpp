#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int x;
    cin >> x;

    int y;
    cin >> y;
    
    string s[6] = { "1/6","1/3","1/2","2/3","5/6","1/1" };
    
    cout << s[6 - max(x, y)];
    
    return 0;
}