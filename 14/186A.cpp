#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    string input1, input2;
    cin >> input1 >> input2;
    int diff = 0;
    for (int i = 0; i < input1.size(); ++i)
        if (input1[i] != input2[i]) diff++;
    sort(input1.begin(), input1.end());
    sort(input2.begin(), input2.end());
    if (diff != 2 || input1 != input2) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}