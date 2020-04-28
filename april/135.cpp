#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    // scanf("%d",&n);
    cin>>n;
    while(n--)
    {
        int a,b;
        long long sum =0;
        // scanf("%d%d",&a,&b);
        cin>>a>>b;
        vector<long long> arr(a);
        for(int i=0;i<a;i++) cin>>arr[i],sum+=arr[i];
        // sum = round((1.0*sum)/a);
        // cout<<sum<<endl;
        sum/=a;
        for(int i=0;i<a;i++) arr[i] = abs(sum - arr[i]);
        sort(arr.begin(),arr.end());
        cout<<arr[b]<<endl; 
    }
}