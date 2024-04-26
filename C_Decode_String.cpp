#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans="";
        for(int i=0; i<n; i++)
        {
            if(i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3]!='0') ) //2 number indx ta valid kina and string ar 2 number indx ta 0 ar soman kina and jodi 3 ghor pore giye jodi dekhi kono valid indx nai othoba 3 ghor porer val ta 0 nahoy tokhon ay kaj ta hoba and
            {
                int res=((s[i]-'0')*10) + (s[i+1]-'0'); //ar jodi 0 hoy else a giye string ar first character tai giye single character hisabe kaj korbe
                ans.push_back((char)(96+res));
                i=i+2;
            }
            else
            {
                int res=(s[i]-'0');
                ans.push_back((char)(96+res)); //96 ar sate 1 + korle 97 mane a and typecast korchi
            }
        }
        cout<<ans<<endl;
    }
}