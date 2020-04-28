#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second

int main()
{

    int tt;
    cin>>tt;

    while(tt--)
    {
        int n;
        cin>>n;
        vector<int> A(n,0);
        vector<pair<int,int>>B;
        for(int i=0;i<n;i++)
            cin>>A[i];
        
        int z=-1;
        int t = A[(n+1)/2];

        for(int i:A)
        {
            if(i == t) break;

            if(B.empty()) { B.push_back({i,1}); ++z;}
            else if(B[z].f == i) B[z].s ++;
            else { B.push_back({i,1}); ++z; }
            
        }

        if(B.size()>=3)
        {
            int g=B[0].s,ss=0,b=0;
            for(int i=1;i<B.size();i++)
            {
                if(ss<=g)
                    ss+=B[i].s;
                else
                    b+=B[i].s;
            }

            if(g<ss && g<b)
                cout<<g<<" "<<ss<<" "<<b<<endl;
            else
                cout<<"0 0 0"<<endl;
        }
        else
            cout<<"0 0 0"<<endl;
    }

    return 0;
}