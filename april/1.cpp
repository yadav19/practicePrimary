#include<bits/stdc++.h>
using namespace std;
inline void asign(vector<int> &C)
{
    for(int i=97 ; i<='z';i++)
        C[i] = i;
}
int main()
{
    int n;
    string s;
    cin>>n;
    vector<int> C(125,0);

    int m =26;
    while(n--)
    {
        C.assign(125,0);
        int flag=1;
        cin>>s;

        C[26] = s[0];
        C[s[0]] = 26;

        for(int i=1;i<s.size();i++)
        {
            if(C[s[i]] == 0)
            {
                if(C[C[s[i-1]]-1] == 0)
                {
                    C[C[s[i-1]]-1] = s[i];
                    C[s[i]] = C[s[i-1]]-1;
                }
                else if(C[C[s[i-1]]+1] == 0)
                {
                    C[C[s[i-1]]+1] = s[i];
                    C[s[i]] = C[s[i-1]]+1;
                }
                else
                {
                    cout<<"NO"<<endl;
                    flag=0;
                    break;
                }
            }
            else
            {
                if(abs(C[s[i]] - C[s[i-1]])!=1)
                {
                    flag=0;
                    cout<<"NO"<<endl;
                    break;
                }
            }
        }

        if(flag)
        {
            cout<<"YES"<<endl;
            for(int i=1;i<55;i++)   if(C[i])    cout<<char(C[i]);
            for(int i =97;i<123;i++)    if(C[i]==0)    cout<<char(i);
            cout<<endl;    
        }
    }
    return 0;
}