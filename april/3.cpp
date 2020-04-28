#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int> A(n,0);
    for(int i=0;i<n;i++)
    cin>>A[i];
    int c =0,k=0;
    for(int b=30;b>=0;b--)
    {
        c=0;
        for(int i =0;i<n;i++) if(((A[i])>>b)&1) c++,k=i;
        if(c==1) break;
    }
    
    if(c==1)    swap(A[0],A[k]);
    
    for(int i: A)   cout<<i<<" ";
    cout<<endl;
    return 0;
}