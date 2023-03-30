#include <bits/stdc++.h>
using namespace std;
#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define ll long long


ll lcm(ll a,ll b)
{
    ll k = __gcd(a,b);
    return (a*b)/k;
}
int main()
{
    optimize();
    ll n, m, i, j;
    while (cin >> n >> m)
    {

        ll a[m];
        for (i = 0; i < m; i++)
        {
            cin>>a[i];
        }
        
        ll ans =0;
        
        for(i=1;i<(1<<m);i++)
        {
            int bits =0;
            ll mul =1;

            for(j=0;j<m;j++)
            {
                if(i & (1<<j))
                {
                    bits++;
                    mul = lcm(mul,a[j]);
                }
            }

            if(bits & 1) ans += n/mul;
            else ans-= n/mul;
        }

        cout<<(n-ans)<<endl;
    }

    
    return 0;
}

