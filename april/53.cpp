#include<bits/stdc++.h>
using namespace std;

int n,i;
string s,t;

#define check(x,y) while(!x.empty()&&!y.empty()) a.push(x.top()),b.push(y.top()),x.pop(),y.pop();
// set<char> ss;
stack<int> l[127],r[127],a,b;

int main()
{
    for(cin>>n>>s>>t;i<n;i++) l[s[i]].push(i),r[t[i]].push(i);
    for(char i='a';i<='z';i++) {check(l[i],r[i])check(l['?'],r[i])check(l[i],r['?']);}
    check(l['?'],r['?'])

    cout<<a.size()<<endl;

    for(;!a.empty();) cout<<a.top()+1<<" "<<b.top()+1<<endl,a.pop(),b.pop();
}