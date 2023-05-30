#include <iostream>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        cin>>a>>b>>c;
        int f=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]!=c[i]&&b[i]!=c[i])
            {
                f=123;
                break;
            }
        }
        
        if(f==0) cout<<"YES"<<endl;
        else     cout<<"NO"<<endl;
    }
    
    return 0;
}