#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,l,f=0;
        cin>>n;
        vector<int> A(200001,0),ans;
        for(int i=0;i<n;i++) cin>>a,A[a]++;
        for(int i=1;i<200001;i++) 
        {
            if(A[i]>2)
                {f=1;break;}
            else if(A[i]>0) 
                ans.push_back(i),l=i;
        }
        if(f || A[l]==2) cout<<"NO"<<endl;
        else 
        {
            cout<<"YES"<<endl;
            for(int i:ans) cout<<i<<" ";
            for(int i=l-1;i>0;i--) if(A[i]==2) cout<<i<<" ";
            cout<<endl;
        }

    }
}