#include<bits/stdc++.h>
using namespace std;
#define fori(i,s,e) for(int i=s;i<e;i++)
#define ford(i,s,e) for(int i=s;i>e;i--)

inline double hyp(double a,double b)
{
    return sqrt(b*b-a*a);
}

int main()
{
    int n,r;
    cin>>n>>r;
    vector<double> x(n);
    vector<double> y(n,0);
    y[0]=r;
    r*=2;
    fori(i,0,n) cin>>x[i];

    fori(i,1,n)
    {
        y[i] = r/2;
        ford(j,i-1,-1) if(abs(x[i]-x[j])<=r && y[j]+r>y[i]) y[i]=max(y[i],hyp(x[i]-x[j],r)+y[j]);
    }
    for(double i:y) printf("%.10lf ",i);
    return 0;
}