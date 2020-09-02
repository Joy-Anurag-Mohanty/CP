#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MOD = 1e9+7;
const int mxN = 300005;

int N,M;

vector<int>adj[mxN];
bool visited[mxN];

int dist[mxN];

void init()
{
    for(int i = 0 ; i < mxN; i++)
    {
        visited[i] = false;
        dist[i] = 0;
    }
}

void printVec(vector<int>V)
{
    for(int i = 0; i < V.size(); i++)
        cout<<V[i]<<" ";
    cout<<endl;
}

void dfs(int s)
{
    visited[s] = true;

    cout<<s<<" ";

    for(int i = 0 ; i < adj[s].size(); i++)
        if(!visited[adj[s][i]])
            dfs(adj[s][i]);
}

void bfs(int s)
{
    queue<int>q;

    visited[s] = true;

    q.push(s);

    while(!q.empty())
    {
        int p = q.front();
        q.pop();

        //cout<<p<<" ";

        for(int i = 0; i < adj[p].size(); i++)
        {
            if(!visited[adj[p][i]])
            {
                visited[adj[p][i]] = true;
                dist[adj[p][i]] = dist[p] + 1;
                q.push(adj[p][i]); 
            }
        }
    }
}

void solve()
{
    init();

    cin>>N>>M; //nodes and edges

    int x,y;

    for(int i = 0; i < M ;i++)
    {
        cin>>x>>y;
        adj[x].pb(y + N);
        adj[x + N].pb(y + 2*N);
        adj[x + 2*N].pb(y);
    }

    int src,dest;
    cin>>src>>dest;

    bfs(src);
    //cout<<endl;

    if(visited[dest])
        cout<<dist[dest]/3<<endl;
    else
        cout<<-1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}