#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;
    int n,d,q;
    int x,y,r;
    string z;
    char c;
    cin>>s;
    n = s.size();
    d = ceil(sqrt(s.size()));
    vector<array<int,26>> sqd(d,{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0});
    for(int i=0;i<n;i++) sqd[i/d][s[i]-'a']++;
    scanf("%d",&q);
    for(int _q=0;_q<q;_q++)
    {
        cin>>x>>y>>z;
        y--;
        if(x==1)
        {
            sqd[y/d][s[y]-'a'] --;
            s[y] = z[0];
            sqd[y/d][s[y]-'a'] ++; 
        }
        else
        {
            r = stoi(z)-1;
            ll ans=0;
            int cc[26] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
            if(y/d == r/d)
            {
                for(int i=y;i<=r;i++) if(cc[s[i]-'a']) 
                {
                    ans++;
                    cc[s[i]-'a']=0;
                }
            }
            else
            {
                for(int i=y;i<int(y/d)*d+d;i++) 
                {
                    if(cc[s[i]-'a'])
                    {
                        ans++;
                        cc[s[i]-'a']=0;
                    }
                }
                for(int i=y/d+1;i<r/d;i++) for(int j=0;j<26;j++)
                {

                    if(sqd[i][j] && cc[j])
                    {
                        ans++;
                        cc[j]=0;
                    }
                }
                for(int i = int(r/d)*d; i<=r;i++) if(cc[s[i]-'a'])
                {
                    ans++;
                    cc[s[i]-'a']=0;
                }
            }
            
            cout<<ans<<endl;
        }
    }
}

// ecfe 3
// eedb 2
// ae 1
