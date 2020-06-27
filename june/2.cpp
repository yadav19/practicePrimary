#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(;t;t--)
    {
        int n,m,in;
        scanf("%d%d",&n,&m);
        vector<int> mexed(n+1,0);
        set<int> ans;
        for(int i=n;i;i--)
        {
            cin>>in;
            ans.insert(in);
        }
        int c1=0,p=0,c2=0;
        for(int i:ans)
        {
            if(i<m && i==p+1) c1++,p=i;
            else if(i==m) p=m;
            else if(i>m && i==p+1) c2++,p=i;
            else break;
        }
        if(c1 == m-1) cout<<c1+c2<<endl;
        else cout<<-1<<endl;
    }
}
