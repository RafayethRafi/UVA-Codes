#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    long long b,p,m;
    while(cin>>b>>p>>m)
    {
        long long ans =1;
        while(p>0)
        {
            if(p%2)
            {
                ans *= b;
                ans%= m;
            }
            p/=2;
            b*= b;
            b%=m;
        }
        cout<<ans<<endl;
    }
    return 0;
}
