#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    vector<int> dp(s.size()+1,0);
    // reverse(s.begin(),s.end());
    for(int i=s.size()-1;i>=0;i--)
    {
        dp[i]=dp[i+1];
        if(s[i]%2==0) dp[i]++;
    } 
    for(int i=0;i<s.size();i++) cout<<dp[i]<<" ";
    cout<<endl;
}