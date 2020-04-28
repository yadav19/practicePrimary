#include<bits/stdc++.h>
using namespace std;

inline int input()
{
    int a;cin>>a;return a;
}

bool nsum(int &n,int &d)
{
    if (n*(n+1)/2 < d) return true;
    else return  (n*(n+1)/2)%2 != d%2;
}

int main()
{
    int a,b;
    int t = input();
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;

        if(a-b == 0)
            cout<<0<<endl;
        else
        {
            int d = abs(a-b);
            int res =1;

            while(nsum(res,d)) res++;
            cout<<res<<endl;
        }
        
    }
    
    return 0;
}