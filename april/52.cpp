#include<bits/stdc++.h>
using namespace std;
bool a[(int)1e5+20];
int main()
{
    int n,k,p;
    set<pair<int,int>> s;
    cin>>n>>k;
    
    while(k--)
    {
        cin>>p;
        a[p] = true;
        s.insert({p,p});

        if(a[p-1]) s.insert({p-1,p});
        if(a[p+1]) s.insert({p+1,p});

    }

    cout<<3ll*n - 2 - s.size()<<endl;
}