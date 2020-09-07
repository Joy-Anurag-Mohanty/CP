#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int mxN = 2e5;
int N,boss;
vector<int>adj[mxN];
int sze[mxN];

void dfs(int u = 0,int p = -1)
{
    sze[u] = 1;

    for(int v : adj[u])
    {
        dfs(v,u);
        sze[u] += sze[v];
    }
}

void solve()
{
    cin>>N;

    for(int i = 1 ; i < N; i++)
    {
        cin>>boss;
        --boss;

        adj[boss].pb(i);
    }

    dfs();

    for(int i = 0 ; i < N ; i++)
        cout<<sze[i] - 1<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}