#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        k = min(k,m-1);
        vector<int> b,a(n);
        for(auto &i:a) cin>>i;
        for(int o=0;o<n-k+1;o++)b.push_back(max(a[o],a[n-m+o])); 
        nth_element(b.begin(),b.begin()+k,b.end());
        cout<<b[k]<<endl;
    }
}