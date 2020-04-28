#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    cin>>n>>m>>k;

    int g = __gcd(n,m);
    


    if(g == 1)
    {
        while(k--)
            cout<<"YES"<<endl;
    }
    else
    {
        n/=g;
        m/=g;
        long long  x1,y1,x2,y2,a1,a2;
        while(k--)
        {
            cin>>x1>>y1>>x2>>y2;
            
            if(x1 == 1)
                a1 = (y1-1)/n;
            else
                a1 = (y1-1)/m;

            if(x2 == 1)
                a2 = (y2-1)/n;
            else
                a2 = (y2-1)/m;
            
            if(a1 == a2) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;

        }
    
    }
    return 0;
}