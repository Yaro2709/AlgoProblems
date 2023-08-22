#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[5][5];
    int perm[5] = { 0, 1, 2, 3, 4 };
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            cin >> arr[i][j];
    int max_sum = INT_MIN;

    do {
        int sum = arr[perm[0]][perm[1]] + arr[perm[1]][perm[0]] + arr[perm[1]][perm[2]] + arr[perm[2]][perm[1]] + 2 * (arr[perm[2]][perm[3]] + arr[perm[3]][perm[2]] + arr[perm[3]][perm[4]] + arr[perm[4]][perm[3]]);
        max_sum = max(max_sum, sum);
    } while (next_permutation(perm, perm + 5));
    cout << max_sum << endl;

    return 0;
}