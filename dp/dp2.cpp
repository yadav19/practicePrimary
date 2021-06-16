#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        vector<int> dp(n+1,0);
        dp[0]=1;dp[1]=2;dp[2]=3;
        for(int i=3;i<=n;i++) dp[i]=(dp[i-1]+dp[i-2])%1000000007;
        // for(int i=0;i<=n;i++) cout<<dp[i]<<" ";cout<<endl;
        cout<<dp[n]<<endl;
    }
    return 0;
}