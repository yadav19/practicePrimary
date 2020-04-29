#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    string s;
    cin>>s;
    long long ans=0,cnt=0,crd=2,g=0;
    for(char i: s) g+=(i=='G');
    for(int o=0;o<s.size();o++)
    {
        cnt=0;
        crd=1;
            for(int i=o;i<s.size();i++)
            {
                if(s[i]=='G') cnt++;
                else if(crd)
                {
                    o=i;
                    crd=0;
                    cnt++;
                }
                else break;
            }
        ans = max(ans,cnt);
    }
    cout<<min(ans,g)<<endl;
}