#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll pos=0,neg=0;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin>>x;
            if(x>=0) pos+=x;
            else
            {
                if(pos+x>=0) pos+=x;
                else
                {
                    x+=pos;
                    pos=0;
                    neg+=x;
                }
            }

        }
        cout<<pos<<endl;
    }
}