#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int mxN = 1e5;
vector<int>adj[mxN];
bool vis[mxN];

void dfs(int s)
{
    vis[s] = true;

    for(int i = 0; i < adj[s].size(); i++)
    {
        if(!vis[adj[s][i]])
            dfs(adj[s][i]);
    }
}

void solve()
{
    int N,M;
    cin>>N>>M;

    for(int i = 0; i < M; i++)
    {
        int a,b;
        cin>>a>>b;
        a--,b--;

        adj[a].pb(b);
        adj[b].pb(a);
    }

    int count = 0;

    for(int i = 0; i < N; i++)
        if(!vis[i])
        {
            count++;
            dfs(i);
        }

    cout<<count - 1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}