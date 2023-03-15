#include<iostream>
#include <cstring>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        string str;
        cin >> str;

        int flag = 0;
        if (str.size() % 2 != 0) {
            flag += 1;
        }

        for (int j = 0; j < (str.size()/2); j++) {
            if (flag > 0) {
                break;
            }

            if (str[j] != str[j + (str.size() / 2)]) {
                flag += 1;
            }
        }
        
        if (flag > 0) {
            cout << "NO" << endl;
        }else if(flag == 0){
            cout << "YES" << endl;
        }
    }

    return 0;
}