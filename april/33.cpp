#include<bits/stdc++.h>
using namespace std;
inline long long input()
{
    long long a; cin>>a; return a;
}
int main()
{
    int n,m,k,k1,counter;
    cin>>n>>m>>k;

    bool A[n+1];
    memset(A,0,sizeof(A));

    for(int i=0; i<m; i++) A[input()] =1;

    counter=1;
    long long ans = 0;

    while(k)
    {
         k1 = k; k=0;++ans;
        
        for(int i=0 ; i<k1; i++ , counter++) if(A[counter]) k++;
        
        if(counter>n) break;
    }

    cout<<ans<<endl;


    return 0;
}