#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define MOD 2000000011  // [We can change the value of MOD as we want]

inline void normal(long long &a) { a %= MOD; (a < 0) && (a += MOD); }
inline long long modMul(long long a, long long b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline long long modAdd(long long a, long long b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline long long modSub(long long a, long long b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline long long modPow(long long b, long long p) { long long r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline long long modInverse(long long a) { return modPow(a, MOD-2); }
inline long long modDiv(long long a, long long b) { return modMul(a, modInverse(b)); }
int main()
{
    optimize();
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        long long n;
        cin>>n;
        
        cout<<"Case #"<<i<<": "<< ((n==1) ? 1 : modPow(n, (n-2)))<<endl;
    }
    return 0;
}

// Carey’s Formula : 
//When we have to make combinations of n nodes.
//There can be n^(n-2) trees.
