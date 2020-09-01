#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int mxN = 100005;
vector<int>adj[mxN];
//vector<int>dfs_order;
bool visited[mxN];

vector<int>nodes;

void init()
{
    for(int i = 0; i < mxN; i++)
        visited[i] = false;
}

void dfs(int s)
{
    visited[s] = true;

    //cout<<s<<" ";
    //dfs_order.pb(s);

    for(int i = 0; i < adj[s].size(); i++)
    {   
        if(!visited[adj[s][i]])
            dfs(adj[s][i]);
    }

}

void solve()
{
    init();

    int N,M; //nodes and edges
    cin>> N >> M;

    int x,y;

    for(int i = 0; i < M; i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    for(int i = 1 ; i <= N; i++)
    {
        if(!visited[i])
        {
            nodes.pb(i);
            dfs(i);
        }
    }

    // for(int i = 0; i < nodes.size(); i++)
    //     cout<<nodes[i]<<" ";
    // cout<<endl;

    cout<<nodes.size() - 1<<endl;

    for(int i = 1; i < nodes.size(); i++)
        cout<<nodes[0]<<" "<<nodes[i]<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}