#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;

        if(a<b) cout<<"impossible"<<endl;
        else
        {
            int x = (a+b)/2;
            int y = (a-b)/2;
            if((x+y)==a && (x-y)==b)
            cout<<x<<" "<<y<<endl;
            else
            cout<<"impossible"<<endl;
        }
    }
    return 0;
}
