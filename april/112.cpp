#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fore(i,s,e) for(int i=s;i<e;i++)
#define pb push_back
int main()
{
    int k,n;
    string s,t;

    scanf("%d",&k);
    fore(_,0,k)
    {
        scanf("%d",&n);
        cin>>s>>t;
        long long ans=0;
        vector<pair<int,int>> a;
        fore(i,0,n)
        {
            if(s[i]!=t[i])
            {
                fore(j,i+1,n)
                {
                    if(s[j] == s[i]){swap(s[j],t[i]);ans+=1;a.pb({j+1,i+1});break;}
                    else if(t[j]==s[i]){swap(s[j],t[j]);swap(s[j],t[i]);a.pb({j+1,j+1});a.pb({j+1,i+1});ans+=2;break;}
                }
            }
        }
        if(s==t)
        {
            printf("YES\n%d\n",ans);
            for(auto i:a) cout<<i.first<<" "<<i.second<<endl;
        }
        else printf("NO\n");
    }
}