#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

map<string,vector<string>> adj;
map<string,string> par;
map<string , int> lvl;


void bfs(string s)
{
    lvl.clear();
    lvl[s] = 1;

    queue<string>q;
    q.push(s);

    while(!q.empty())
    {
        string f = q.front();
        q.pop();

        for(auto u: adj[f])
        {
            if(lvl[u]==0)
            {
                lvl[u] = lvl[f]+1;
                par[u] = f;
                q.push(u);
            }
        }
    }
}
int main()
{
    optimize();
    int n;
    bool yes = 0;
    while(cin>>n)
    {
        if(yes) cout<<endl;
        yes = 1;

        adj.clear();
        par.clear();
        for(int i=1;i<=n;i++)
        {
            string u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);

        }

        string s,t;
        cin>>s>>t;
        bfs(s);

        if(lvl[t]==0)
        {
            cout<<"No route"<<endl;
            continue;
        }

        vector<pair<string,string>>ans;

        while(!par[t].empty())
        {
            ans.push_back({par[t],t});
            t = par[t];
        }

        reverse(ans.begin(),ans.end());

        for(auto u: ans) cout<<u.first<<" "<<u.second<<endl;
        
    }
    return 0;
}
