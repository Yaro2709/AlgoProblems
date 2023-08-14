#include <iostream>

using namespace std;

int arr[1000];
int need[50];

int main() {
    arr[0] = 1;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++) {
        cin >> need[i];
        arr[need[i]] = 1;
    }
    for (int i = 0; i < k; i++) {
        cout << need[i] << " ";
        int cnt = 1;
        for (int j = 0; j <= n * k; j++) {
            if (arr[j] == 0) {
                cout << j << " ";
                arr[j] = 1;
                cnt++;
            }
            if (cnt >= n)
                break;
        }
        cout << endl;
    }

    return 0;
}