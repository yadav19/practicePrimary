#include<bits/stdc++.h>
using namespace std;

#define fore(i,s,e) for(int i=s;i<e;i++)

bool sorting(array<int,4> &a,array<int,4> &b)
{
    if(a[0]<b[0]) return true;
    else if(a[0]==b[0])
    {
        if(a[1]<b[1]) return true;
        else if(a[1] == b[1])
        {
            if(a[2]<b[2]) return true;
            else return false;
        }
        else return false;
    }
    else return false;
}

int main()
{
    int n;
    scanf("%d",&n);

    vector<array<int,4>> c(n,array<int,4>());
    fore(i,0,n) cin>>c[i][0]>>c[i][1]>>c[i][2],c[i][3]=i+1;

    int v[n];
    memset(v,1,sizeof(v));
    sort(c.begin(),c.end(),sorting);
    fore(i,0,n-1)
    {
        if(v[i])
        fore(j,i+1,n)
        {
            if(v[j])
            if(j<n-1 && c[j] == c[j+1])
            {
                v[j]=0;
                v[j+1]=0;
                cout<<c[j][3]<<" "<<c[j+1][3]<<endl;
            }
            else
            {
                v[i]=0;
                v[j]=0;
                cout<<c[i][3]<<" "<<c[j][3]<<endl;
                break;
            } 
        }
    }
}
