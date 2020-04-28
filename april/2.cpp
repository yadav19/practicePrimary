#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int A[26*26+27];
    memset(A,0,sizeof(A));
    long long ans =0;
    cin>>s;
    for(char c:s)
    {
        for(int i=1;i<=26;i++) if(A[i]) A[26*i+ (c-96)]+=A[i];
        A[c - 96]++; 
    }

    cout<<*max_element(A+1,A+707)<<endl;

}