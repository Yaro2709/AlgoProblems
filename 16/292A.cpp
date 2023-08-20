#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int max = 0, cur = 0, que = 0;
    for (int i = 0; i < n; i++)
    {
        int tempt, tempc;
        cin >> tempt >> tempc;
        if (!cur)
            cur = tempt;
        que = (que - (tempt - cur) < 0) ? 0 : (que - (tempt - cur));
        cur = tempt;
        que += tempc;
        max = max < que ? que : max;
    }
    cout << que + cur << " " << max << endl;

    return 0;
}