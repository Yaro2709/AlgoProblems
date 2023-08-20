#include<iostream>

using namespace std;

const int sz = 1e3 + 5;
int A[sz][sz], B[sz][sz];

int main() {
    int n, m, u = 0, v = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        A[b][a]++;
    }
    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        B[b][a]++;
    }
    int sum_same_size = 0, sum_same_size_color = 0;

    for (int dia = 0; dia <= 1000; dia++)
    {
        int sumA = 0, sumB = 0;
        for (int color = 0; color <= 1000; color++)
        {
            sumA += A[dia][color];
            sumB += B[dia][color];
            sum_same_size_color += min(A[dia][color], B[dia][color]);
        }
        sum_same_size += min(sumA, sumB);

    }

    cout << sum_same_size << " " << sum_same_size_color;

    return 0;
}