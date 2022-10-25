
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 10000;
vector<int> adj[mx];
bool vis[mx];

void dfs(int n)
{

    if(!vis[n])
    {
        vis[n]=1;

        for(auto u:adj[n])
        {
            if(vis[u]==0) dfs(u);
        }

    }
}

int main()
{
    optimize();
    int t;
    cin>>t;
    for(int tc=1;tc<=t;tc++)
    {
        int cnt=0,i;
        char ch;
        cin>>ch;

        int x = ch - 'A'+1;
        string s;
        getline(cin,s);
        while(getline(cin,s))
        {
            if(s.size()==0) break;

            int p = s[0] - 'A' +1;
            int q = s[1] - 'A'+1;
            adj[p].push_back(q);
            adj[q].push_back(p);

        }

        for(i=1;i<=x;i++)
        {
            if(!vis[i])
            {
                cnt++;
                dfs(i);
            }
        }
        cout<<cnt<<endl;

        if(tc!=t) cout<<endl;
        
        memset(vis,0,sizeof(vis));
        memset(adj,0,sizeof(adj));
        

    }
    return 0;
}

