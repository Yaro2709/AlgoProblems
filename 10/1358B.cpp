#include <iostream>
#include <algorithm>

using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int *vet = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> vet[i];
        }

        sort(vet, vet + n);

        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (i + 1 >= vet[i])
                ans = max(ans, i + 1);
        }

        cout << ans + 1 << endl;

        delete[] vet;
    }

    return 0;
}