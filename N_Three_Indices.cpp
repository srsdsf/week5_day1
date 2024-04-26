#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        int flag=false;
        int I,J,K;
        for(int i=2; i<=n-1; i++)
        {
            if(a[i]>a[i-1] && a[i]>a[i+1])
            {
                flag=true;
                I=i-1;
                J=i;
                K=i+1;
                break;
            }
                
        }
        if(flag)
        {
            cout<<"YES"<<endl;
            cout<<I<<" "<<J<<" "<<K<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}