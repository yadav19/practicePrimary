#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string t;
    cin>>s>>t;
    int ss = s.size();
    int ts = t.size();
    int l = ss-ts+1;
    int counter,c=0,x;
    int ans = 0,j,i;
    for(i=0;i<l;i++)
    {
        counter =0;
        x=i;
        if(s[i]==t[counter])
        for(j=i;j<ss && counter<ts;j++)
            if(s[j]==t[counter])
                {
                    c = max(c,j-x-1);
                    x = j;
                    counter++;
                }
        if(counter==ts) ans=max(ans,max(c,max(i,ss-j)));
    }
    cout<<ans<<endl;
}