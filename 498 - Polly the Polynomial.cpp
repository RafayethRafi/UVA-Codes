#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int get_num(string s)
{
    bool f = 0;
    int i=0;
    int x = 0;
    if(s[0]=='-') f=1,i=1;

        for(i;i<s.size();i++)
        {
            x = (x*10)+ (s[i]-'0'); 
        }
    
    if(f) x = -x;
    return x;
}

int main()
{
    optimize();
    string s;
    vector<int> c;
    vector<int> x;

    while(getline(cin,s))
    {
        int i,j;
        string t="";
        for(i=0;i<=s.size();i++)
        {
            if((s[i]==' ') || (i==s.size()) )
            {
                c.push_back(get_num(t));
                t="";
            }
            else t+= s[i];
        }

        getline(cin,s);
        for(i=0;i<=s.size();i++)
        {
            if((s[i]==' ') || (i==s.size()) )
            {
                x.push_back(get_num(t));
                t="";
            }
            else t+= s[i];
        }

        reverse(c.begin(),c.end());

        for(i=0;i<x.size();i++)
        {
            int ans=0;
            for(j=c.size()-1;j>=0;j--)
            {
                ans += (c[j] * pow(x[i],j));
            }
            if(i==x.size()-1) cout<<ans;
            else
            cout<<ans<<" ";
        }
        cout<<endl;

        c.clear();
        x.clear();
    }

    return 0;
}
