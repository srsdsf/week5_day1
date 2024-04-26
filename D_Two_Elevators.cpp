#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int d,e;
        d=abs(b-c)+(c-1);
        e=abs(a-1);
        if(e<d)
        {
            cout<<"1"<<endl;
        }
        else if(d<e)
        {
            cout<<"2"<<endl;
        }
        else if(d==e)
        {
            cout<<"3"<<endl;
        }
    }
}