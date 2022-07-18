#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

const int mx = 300;
vector<int>adj[mx];
int col[mx];

bool isBipartite(int s)
{
    memset(col,-1,sizeof(col));
    col[s] = 1;

    queue<int>q;
    q.push(s);

    while(!q.empty())
    {
        int f = q.front();
        q.pop();
        for(auto u:adj[f])
        {
            if(col[u]==-1)
            {
                if(col[f]==1) col[u]= 2;
                else col[u] = 1;
                q.push(u);
            }
            else if(col[u]==col[f]) return 0;
        }
    }
    return 1;
}

int main()
{
    optimize();
    int n;
    while(cin>>n)
    {
        if(n==0) break;
        for(int i=0;i<mx;i++) adj[i].clear();
        int m;
        cin>>m;
        for(int i=0;i<m;i++)
        {
            int u,v;
            cin>>u>>v;

            adj[u].push_back(v);
            adj[v].push_back(u);

        }
        if(isBipartite(0)==1) cout<<"BICOLORABLE."<<endl;
        else cout<<"NOT BICOLORABLE."<<endl;
    }
    return 0;
}
