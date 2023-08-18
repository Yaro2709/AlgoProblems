#include<iostream>

using namespace std;

int main() 
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, z;
        cin >> x >> y >> z;
        cout << "1";
        for (long long int i = 0; i < x - 1; i++)
        {
            cout << "0";
        }
        cout << " ";
        for (long long int j = 0; j < y - z + 1; j++)
        {
            cout << "1";
        }
        for (long long int k = 0; k < z - 1; k++)
        {
            cout << "0";
        }
        cout << endl;
    }
    return 0;
}