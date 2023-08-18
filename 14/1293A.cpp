#include<iostream>
#include<map>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long n, s, k, c = 0;   cin >> n >> s >> k;
        map<long, long> m;
        long *a = new long[k];    
        for (int i = 0; i < k; ++i) cin >> a[i], m[a[i]]++;
        long i = s;
        while (i <= n || (s - c) > 0)
        {
            if (i <= n && m[i] == 0) { cout << c << '\n'; break; }
            else if ((s - c) > 0 && m[s - c] == 0) { cout << c << '\n'; break; }
            c++;
            i++;
        }

        delete[] a;
    }

    return 0;
}