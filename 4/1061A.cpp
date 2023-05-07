#include<iostream>

using namespace std;

int main()
{
    int n, s;
    cin >> n >> s;

    int count = 0;
    if (s <= n){
        s = 0;
        count = 1;
    }else if (s > n) {
        while (s != 0) {
            if (s <= n) {
                s = 0;
                count += 1;
            }
            else {
                s -= n;
                count += 1;
            }
        }
    }

    cout << count << endl;

    return 0;
}