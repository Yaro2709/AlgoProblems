#include<iostream>
#include<set>

using namespace std;

int main()
{
    string str;
    char key;
    set<char> key_set;
    int n, k;
    long long ctr = 0;
    long long sum = 0;
    cin >> n >> k >> str;
    while (k--)
    {
        cin >> key;
        key_set.insert(key);
    }
    for (int i = 0; str[i] != 0; i++)
    {
        if (key_set.find(str[i]) != key_set.end())
            ctr++;
        else
        {
            sum += (ctr * (ctr + 1)) / 2;
            ctr = 0;
        }
    }
    sum += (ctr * (ctr + 1)) / 2;
    cout << sum << endl;

    return 0;
}