#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    for(cin>>t;t--;)
    {
        int n,k,x=0;
        cin>>n>>k;
        vector<int> bits(32,0);
        for(int i=0;i<n;i++)
        {
            int input,j=0;
            cin>>input;
            do
            {
                bits[j++]+=(input&1);
            } while (input>>=1);
        }

        int ans=0;

        while(k--)
        {
            int c=0,p=-1;
            for(int i=0;i<32;i++) if(bits[i] && bits[i]*pow(2,i)>c) c=bits[i]*pow(2,i),p=i;
            if(p==-1) break;
            else
            {
                bits[p]=0;
                ans+=pow(2,p);
            }
        }
        cout<<ans<<endl;
    }
}