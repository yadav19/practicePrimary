#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d",&n);
    int o = ceil(sqrtf(n));
    int i =n/i;

    for(int _i=0;_i<o;_i++)
    for(int _ii=o;_ii>=1;_ii--)
    {
        if(o*_i+_ii <= n) cout<<o*_i+_ii<<" ";
    }
}