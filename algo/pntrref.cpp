#include<bits/stdc++.h>
using namespace std;
void combine(vector<int> &a)
{
    int ss = pow(2,a.size())-1,pp=0;
    while(pp++<ss)
    {
        cout<<pp<<". ";
        int pi=1;
        for(int i=0;i<a.size() && pi<=pp;i++)
        {
            if(pp&pi) cout<<a[i]<<" ";
            pi<<=1;
        }
        cout<<endl;
    }
}
void permute(vector<int> &a, int i)
{
    if(i==a.size()-1) 
    {
        for(int ii:a) cout<<ii<<" ";
        cout<<endl;
        return;
    }
    else
    {
        permute(a,i+1);
        for(int j=i+1;j<a.size();j++)
        {
            swap(a[i],a[j]);
            permute(a,i+1);
            swap(a[i],a[j]);
        }
    }
}

int main()
{
    vector<int> a = {1,2,3,4};
    vector<int> v(a.size(),0);
    // permute(a,0);
    combineR(a,v,3,0);
}