#include<bits/stdc++.h>
using namespace std;

bool check(int n,int d)
{
    long long sum = n*(n+1)/2;

    if(sum >= d && sum%2 == d%2) return false;

    return true;
}

int main()
{
    int n,a,b;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;

        if(a-b == 0) cout<<0<<endl;
        else
        {
            int d = abs(a-b);
            long long res=1;
            while(check(res,d)) ++res;

            cout<<res<<endl;
        }
        
    }
}