#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

double eps = 1e-9;
int main()
{
    optimize();
    int t;
    cin>>t;

    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    while(t--)
    {
        double x1,x2,x3,x4,y1,y2,y3,y4,A1,A2,B1,B2,C1,C2;

        cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;

        A1 = y2-y1;
        B1 = x1-x2;
        C1 = A1*x1 + B1*y1;
        A2 = y4-y3;
        B2 = x3-x4;
        C2 = A2*x3 + B2*y3;

        double Denominator = A1*B2 - A2*B1;
        double Dx = (C1*B2 - B1*C2);
        double Dy = (C2*A1 - C1*A2);

        if(!Denominator && (Dx||Dy)) cout<<"NONE"<<endl;
        else if(!Denominator && !Dx && !Dy) cout<<"LINE"<<endl;
        else cout<<"POINT "<<fixed<<setprecision(2)<<(Dx/Denominator)<<" "<<(Dy/Denominator)<<endl;
        
    }

    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
