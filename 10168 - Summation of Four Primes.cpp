#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int N = 1e7+10;
vector<bool> is_prime(N,1);
vector<int> prime;

void sieve()
{
    is_prime[0] = is_prime[1] = 0;
    for(int i=2;i<N;i++)
    {
        if(is_prime[i])
        {
            for(int j=i+i;j<N;j+=i)
            is_prime[j] =0;
        }
    }
    prime.push_back(2);
    for(int i=3;i<N;i+=2)
    {
        if(is_prime[i])
        prime.push_back(i);
    }
}

int main()
{
    optimize();
    sieve();
    int n;
    while(cin>>n)
    {
        if(n<8) {cout<<"Impossible."<<endl; continue;}

        int rem_sum;
        if(n%2==0) cout<<"2 2 ", rem_sum = n-4;
        else cout<<"2 3 ", rem_sum = n-5;

        bool f=1;
        for(int i=2;i<rem_sum;i++)
        {
            if(is_prime[i] && is_prime[rem_sum-i])
            {
                cout<<i<<" "<<(rem_sum-i)<<endl;
                f=0;
                break;
            }
        }
    }
    return 0;
}
