#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a.begin(),a.end());
        ll ans=0;
        ll sum=0;
        for(int i=0; i<n; i++)
        {
            if(sum+a[i]>m) break;
            else
            {
                sum+=a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}