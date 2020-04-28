    #include<bits/stdc++.h>
    using namespace std;

    bool check(pair<int,int> a,pair<int,int> b)
    {
        return a.second >= b.first;
    }

    int main()
    {
        int n,l,f,r=0;
        cin>>n;
        vector<pair<int,int>> A;
        for(int _=0;_<n;_++)
        {
            f =1;
            cin>>l;
            vector<int> B(l+1,1e6);
            for(int i=1;i<=l;i++)
            {
                cin>>B[i];
                if(B[i] > B[i-1]) f=0;
            }

            if(f) r++;
        }
        // for(auto i: A){for(auto j: i) cout<<j<<" ";cout<<endl;}
        long long result = pow(n,2);
        // cout<<result;

        sort(A.begin(),A.end(),check);
        // for(int i=0;i<A.size();i++) for(int j =0;j<A.size();j++) if(A[i][1] >= A[j][0]) result--;
        result -= r*(r+1)/2;

        cout<<result-1<<endl;
        return 0;
    }