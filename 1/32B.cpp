#include <iostream>
#include <string>
 
using namespace std;
 
int main()
{
    string n;
    int a[200] = { 0 };
 
    cin >> n;
    
    int count = 0;
    for (int i = 0; i < n.size(); i++) {
        if (n[i] == '.') {
            a[count] = 0;
            count += 1;
        }
        else if ((n[i] == '-') && (n[i + 1] == '.')) {
            a[count] = 1;
            i += 1;
            count += 1;
        }
        else if ((n[i] == '-') && (n[i + 1] == '-')) {
            a[count] = 2;
            i += 1;
            count += 1;
        }
    }
 
    for (int i = 0; i < count; i++) {
        cout << a[i];
    }
 
    return 0;
}