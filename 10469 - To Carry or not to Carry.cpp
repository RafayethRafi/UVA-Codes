#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define ll long long

int main()
{
    optimize();
    int a,b;
    while(cin>>a>>b)
    {
        ll ans = 0,i;

        for(i=1;i<=32;i++)
        {
            if(( (a & 1<<i) && !(b & 1<<i)) || (!(a & 1<<i) && (b & 1<<i)) ) 
            {
                ans += (1<<i);
            }
        }

        cout<<ans<<endl;
    }
    return 0;
}
