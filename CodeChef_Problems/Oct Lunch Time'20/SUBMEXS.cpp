#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mxN = 1e5;
vector<int>adj[mxN];

pair<ll,int>dfs(int s)
{
    ll mex = 0;
    int size = 1;

    for(int x : adj[s])
    {
        auto temp = dfs(x);
        mex = max(mex,temp.first);
        size = size + temp.second;
    }
    return {mex + size, size};
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;

        for(int i = 1; i <= N; i++)
            adj[i].clear();

        for(int i = 2; i <= N; i++)
        {
            int p;
            cin>>p;
            adj[p].push_back(i);
        }

        printf("%lld\n",dfs(1).first);
    }

    return 0;
}