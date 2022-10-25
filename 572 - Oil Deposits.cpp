#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int dx[8] = {1, -1, 0,  0, 1,  1, -1, -1};
int dy[8] = {0,  0, 1, -1, 1, -1,  1, -1};

const int mx = 10005;
vector<int>adj[mx];
bool vis[mx][mx];

int n,m;
vector<string> s;
string t;

void dfs(int x,int y)
{
    vis[x][y] =1;
    int i,j;

    for(i=0;i<8;i++)
    {
        int p = x + dx[i];
        int q = y + dy[i];

        if(p>=0 && p<n && q>=0 && q<m && !vis[p][q])
        {
            vis[p][q]= 1;
            if(s[p][q]=='@') dfs(p,q);
        }
    }
}

int main()
{
    optimize();
    while(1)
    {
        memset(vis,0,sizeof(vis));
        s.clear();

        int i,j,k,cnt=0;
        cin>>n>>m;
        if(n==0) break;
        

        for(i=0;i<n;i++)
        {
            cin>>t;
            s.push_back(t);
        }
        
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(!vis[i][j])
                {
                    vis[i][j] =1;
                    if(s[i][j]=='@')
                    {
                        cnt++;
                        dfs(i,j);
                    }
                }
            }
        }

        cout<<cnt<<endl;

    }
    return 0;
}
