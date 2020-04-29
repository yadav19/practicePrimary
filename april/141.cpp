#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    for(int _t=0;_t<t;_t++)
    {
        int n;
        scanf("%d",&n);
        vector<array<int,3>> A(n,array<int,3>());
        for(int i=0;i<n;i++) cin>>A[i][0]>>A[i][1],A[i][2]=i;
        sort(A.begin(),A.end());
        int cnt = 1,l=0,r=0;
        vector<int> ans(n);
        ans[A[0][2]]=1;l=A[0][0];r=A[0][1];
        for(int i=1;i<n;i++)
        {
            if(A[i][0]<=r)
            {
                l = min(l,A[i][0]);
                r = max(r,A[i][1]);
                ans[A[i][2]]=cnt;
            }
            else
            {
                if(cnt==1) cnt++;
                l = A[i][0];
                r = A[i][1];
                ans[A[i][2]]=cnt;
            }
        }
        if(cnt==2){for(int i:ans)cout<<i<<" ";cout<<endl;}
        else cout<<-1<<endl;
    }
}