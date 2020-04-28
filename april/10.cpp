#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> A(n),B(n);
    for(int i =0;i<n;i++) cin>>A[i];
    for(int i =0;i<n;i++) cin>>B[i];
    set<int> candidates;
    for(int i =0;i<n;i++) candidates.insert((B[0] - A[i])%m);

    sort(B.begin(),B.end());
    int f;
    for(int x:candidates)
    {
        f =1;
        vector<int> tmp = A;
        for(int i=0;i<n;i++)
        {
            tmp[i] = (tmp[i]+x)%m;
        }

        sort(tmp.begin(),tmp.end());

        if(tmp == B)
        {
            cout<<x<<endl;
            f=0;
            break;
        }

    }

    if (f)
        cout<<4<<endl;
}