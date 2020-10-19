#include<bits/stdc++.h>
using namespace std;
#define ll long long

//assign even integers to even levels and odd integers to odd levels

class Graph
{
    int V;

    list<int>*adj;

    public:

    Graph(int V);
    void addEdge(int u, int v);
    void BFS(int s);
};

Graph::Graph(int V)
{
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void Graph::BFS(int s)
{
    bool *visited = new bool[V];

    int level[V];    

    for(int i = 0; i < V; i++)
        visited[i] = false;

    list<int>queue;

    visited[s] = true;
    queue.push_back(s);
    level[s] = 0;

    list<int>::iterator i;

    int lvl = 0;

    while(!queue.empty())
    {
        s = queue.front();

        //cout<<s<<" ";

        queue.pop_front();

        for(i = adj[s].begin(); i != adj[s].end(); i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
                level[*i] = level[s] + 1;
            }  
        }   

    }

    // for(int i = 0; i < V; i++)
    //     cout<<level[i]<<' ';
    // cout<<endl;

    for(int i = 0; i < V; i++)
    {
        if(level[i] % 2 == 0)
        {
            cout<<2<<" ";
        }

        else
        {
            cout<<1<<" ";
        }
    }

    cout<<endl;

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

        Graph g(N);

        for(int i = 0; i < N - 1; i++)
        {
            int u,v;
            cin>>u>>v;
            --u,--v;

            g.addEdge(u,v);
        }

        g.BFS(0);
    }

    return 0;
}