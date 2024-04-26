#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int a,b,n,s;
        cin>>a>>b>>n>>s;
        int a1=s/n;
        if(a>=a1)
        {
            ll ans=(a1*n);
            int b1=s-ans;
            if(b1<=b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else
        {
             ll ans=(a*n);
            int b1=s-ans;
            if(b1<=b)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}