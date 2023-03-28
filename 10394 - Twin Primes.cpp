#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N = 20000005;
vector<bool> is_prime(N,1);
vector<pair<int,int>>ans(100001);

void sieve()
{

    int pos =1;
    int prev =0;

    for(int i=3;pos<=100000;i+=2)
    {
        if(is_prime[i])
        {
            for(int j=i+i;j<N;j+=i)
            is_prime[j] = 0;

            if((i-prev)==2)
            {
                ans[pos] = {prev,i};
                pos++;
            }

            prev = i;
        }
    }

}

int main()
{
    optimize();
    sieve();

    int n;
    while(cin>>n)
    {
        cout<<"("<<ans[n].first<<", "<<ans[n].second<<")"<<endl;
    }
    return 0;
}
