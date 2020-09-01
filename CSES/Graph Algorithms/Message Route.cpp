#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int N,M;

const int mxN = 100005;
vector<int>adj[mxN];

bool visited[mxN];
int pred[mxN], dist[mxN];

void init()
{
    for(int i = 0; i < mxN; i++)
    {
        visited[i] = false;
        dist[i] = INT_MAX;
        pred[i] = -1;
    }
}

bool BFS(int s)
{
    queue<int>q;

    q.push(s);

    visited[s] = true;
    dist[s] = 0;

    while(!q.empty())
    {
        int p = q.front();

        //cout<<p<<" ";

        q.pop();

        for(int i = 0 ; i < adj[p].size(); i++)
        {
            if(!visited[adj[p][i]])
            {
                q.push(adj[p][i]);
                visited[adj[p][i]] = true;

                dist[adj[p][i]] = dist[p] + 1;
                pred[adj[p][i]] = p;

                if(adj[p][i] == N)
                    return true;
            }
        }
    }

    return false;
}

void solve()
{
    init();

    cin>> N >> M;

    int x,y;

    for(int i = 0; i < M; i++)
    {
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    int src = 1, dest = N;

    if(!BFS(src))
    {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }

    vector<int>path;

    int crawl = dest;
    path.pb(crawl);

    while(pred[crawl] != -1)
    {
        path.pb(pred[crawl]);
        crawl = pred[crawl];
    }

    cout<<path.size()<<endl;

    for(int i = path.size() - 1; i >= 0; i--)
        cout<<path[i]<<" ";
    cout<<endl;

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}