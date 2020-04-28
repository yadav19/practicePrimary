#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    string in,out;
    array<vector<int>,2> p;
    while(t--)
    {
        cin>>in;
        out="";
        for(char c:in)
            p[int(c-'0') & 1].push_back(c-'0');
        
        while(!p[0].empty() and !p[1].empty())
        {
            if(p[0].empty)
        }
    }
}