#include<iostream>
#include<map>

using namespace std;

int main() {
    long long int t, n, temp;
    cin >> t;
    while (t--) {
        cin >> n;
        map<long long int, long long int> diff = {};
        long long int count = 0;
        for (int j = 0; j < n; j++) {
            cin >> temp;
            if (diff[temp - j]) count += diff[temp - j];
            diff[temp - j]++;
        }

        cout << count << '\n';
    }
    return 0;
}