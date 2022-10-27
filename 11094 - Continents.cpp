#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int n,m,i,j,p,q;
char land;
const int mx = 1005;
bool vis[mx][mx];
string s;
char v[mx][mx];



int dfs(int x,int y)
{
    
    if(x<0 || x>=n) return 0;
    if(y==-1) y = m-1;
    else if(y==m) y=0;
    if(vis[x][y]) return 0;
    if(v[x][y]!=land) return 0;

    vis[x][y] = 1;
    
    return 1+ dfs(x+1,y)+  dfs(x-1,y)+  dfs(x,y+1)+ dfs(x,y-1);

}


int main()
{
    optimize();
    while(scanf("%d%d",&n,&m)==2)
    {
        for(i=0;i<n;i++)
        {
            scanf("%s",&v[i]);
        }


        scanf("%d%d",&p,&q);
        land = v[p][q];
        dfs(p,q);
        int ans =0,cnt;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(v[i][j]==land && !vis[i][j])
                {

                    cnt = dfs(i,j);
                    if(cnt>ans) ans = cnt;
                }
            }
        }

        cout<<ans<<endl;
        memset(vis,0,sizeof(vis));

    }
    return 0;
}
