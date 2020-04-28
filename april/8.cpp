#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        if(a<b) cout<<a<<endl;
        else
        {
            for(int i=0;i<a.size();i++)
            {
                for(int j=i+1;j<a.size();j++)
                    if(a[j]<a[i]) swap(a[i],a[j]);
                    break;
            }

            if(a<b) cout<<a<<endl;
            else cout<<"---"<<endl;
        }
    }
    return 0;
}