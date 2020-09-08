#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define ar array

const int mxN = 1e5;

int N,M;

int p[mxN];
vector<int>adj[mxN],cycle;
bool visited[mxN];

void printGraph()
{
    for(int i = 0 ; i < N; i++)
    {
        cout<<i<<"-> ";

        for(int j : adj[i])
        {
            cout<<j<<" ";
        }

        cout<<endl;
    }
}

void dfs(int u, int pu = -1)
{
    p[u] = pu;
    visited[u] = true;

    for(int v : adj[u])
    {
        if(v == pu) //ignore if v coonects to the parent
            continue;

        if(visited[v])
        {
            int temp = u;

            while(u^v) //back track to u
            {
                cycle.pb(u);
                u = p[u];
            }

            cycle.pb(v);
            cycle.pb(temp);

            cout<<cycle.size()<<endl;

            for(int i : cycle)
                cout<<i+1<<" ";
            cout<<endl;

            exit(0);
        }

        else
            dfs(v,u);
    }
}

void solve()
{
    cin>>N>>M; //nodes and edges
    int a,b;

    for(int i = 0; i < M; i++)
    {
        cin>>a>>b;
        a = a - 1; //zero indexing
        b = b - 1; //zero indexing
        adj[a].pb(b);
        adj[b].pb(a);
    }

    
    for(int i = 0; i < N ; i++)
    {
        if(!visited[i])
            dfs(i);
    }

    cout<<"IMPOSSIBLE"<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}