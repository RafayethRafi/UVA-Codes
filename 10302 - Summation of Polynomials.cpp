#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

#define ll long long

int main()
{
    optimize();
    ll n;
    while(cin>>n)
    {
        ll ans = (n*(n+1))/2;
        ans*=ans;

        cout<<ans<<endl;
    }
    return 0;
}
