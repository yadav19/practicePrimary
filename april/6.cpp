#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a=0;
    cin>>n;
    // int A[n+1];
    vector<int> B,A(n+1,0);
    // memset(A,0,sizeof(A));

    for(int i=1;i<=n;i++)   cin>>A[i];

    int m=0,mx=1,f=0;
    
    for(int i=2;i<=n;i++)
    {
        if(A[i] > A[i-1]) ++mx;
        else
        {
            if(f) B.push_back(m+mx-1);
            else B.push_back(mx);

            if(A[i] > A[i-2]) f =1;
            else if(A[i+1] > A[i-1]) f=1;
            else f=0;

            m =mx;
            mx = 1;
        }
        
        // B = A;
        // f=1;
        // mx = 1;
        // for(int j=i+1;j<=n;j++)
        // {
        //     if(B[j] > B[j-1]) mx++;
        //     else if(f)
        //     {
        //         f =0, i = j;
                
        //         if(B[j] <= B[j-2]) B[j] = B[j-1];

        //     } 
        //     else break;
        // }
        // m = max(m,mx);
    }
    if(A[n]>A[n-1])
    {
    if(f) B.push_back(m+mx-1);
    else B.push_back(mx);}

    // for(int i:B) cout<<i<<" ";
    cout<<*max_element(B.begin(),B.end())<<endl;
}