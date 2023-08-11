#include<iostream>

using namespace std;

int main()
{
    char ch[100];
    int i = -1;
    do
    {
        i++;
        cin >> ch[i];
    } while (ch[i] != '?');
    if (ch[i - 1] == 'y' || ch[i - 1] == 'Y' || ch[i - 1] == 'a' || ch[i - 1] == 'A' || ch[i - 1] == 'e' || ch[i - 1] == 'E' || ch[i - 1] == 'i' || ch[i - 1] == 'I' || ch[i - 1] == 'o' || ch[i - 1] == 'O' || ch[i - 1] == 'u' || ch[i - 1] == 'U')
        cout << "YES";
    else
        cout << "NO";

    return 0;
}