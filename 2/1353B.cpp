#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int n;
        cin >> n;

        int k;
        cin >> k;

        int* a = new int[n]; 
        int *b = new int[n];
        int sum = 0;
	    
        for(int i = 0; i < n; i++){
            cin>> a[i];
            sum += a[i];
        }
	    
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

	    sort(a,a+n);
        sort(b,b+n);

        int dif;
        int st = 0; 
        int end = n;
        for (int i = 0; i < k; i++) {
		    dif = b[--end] - a[st++];
		    
            if (dif <= 0) { 
                break; 
            }

		    sum += dif;
	    }

	    cout << sum << endl;
    }

    return 0;
}