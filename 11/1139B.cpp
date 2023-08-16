#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> A[i];
    }
    long long sum = A[n];
    for (int i = n - 1; i >= 1; i--)
    {
        A[i] = min(max(A[i + 1] - 1, 0), A[i]);
        sum += A[i];
    }
    cout << sum << "\n";

    return 0;
}