#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        string s,t,ans = "";
        cin>>s>>t;
        if(t.size()>s.size()) swap(s,t);

        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());

        int i,j,cnt=0,z = 0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]!='0') break;
            else cnt++;
        }

        if(cnt>0) s.erase(s.begin(),s.begin()+cnt);

        cnt=0;
        for(i=0;i<t.size();i++)
        {
            if(t[i]!='0') break;
            else cnt++;
        }
        if(cnt>0) t.erase(t.begin(),t.begin()+cnt);

        reverse(s.begin(),s.end());
        reverse(t.begin(),t.end());

        for(j=0;j<t.size();j++)
        {
            int x = s[j] - '0';
            int y = t[j] - '0';

            z += (x+y);
            char ch = (z%10) + '0';
            ans+= ch;
            z/= 10;
        }
        for(i=j;i<s.size();i++)
        {
            int x = s[i] - '0';
            z += x;
            char ch = (z%10) + '0';
            ans+= ch;
            z/= 10;
        }
        if(z>0)
        {
            char ch = z+'0';
            ans+= ch;
        }

        cnt=0;
        for(i=0;i<ans.size();i++)
        {
            if(ans[i]!='0') break;
            else cnt++;
        }

        if(cnt>0) ans.erase(ans.begin(),ans.begin()+cnt);

        
        cout<<ans<<endl;

    }
    return 0;
}
