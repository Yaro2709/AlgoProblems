#include<iostream>
#include <set>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int *a = new int[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int>st;
        int m = st.size();
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(a[i]);
            if (m == st.size()){
                break;
            }
            else {
                m = st.size();
            }
        }
        cout << n - st.size() << endl;

        delete[] a;
    }

    return 0;
}