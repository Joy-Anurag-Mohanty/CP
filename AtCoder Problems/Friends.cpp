#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll MOD = 1000000007;
const int mxN = 200001;

vector<int>adj[mxN];
bool visited[mxN];

void init()
{
	for(int i = 0; i < mxN; i++)
		visited[i] = false;
}

int dfs(int s)
{
	visited[s] = true;

	int size = 1;

	for(int i = 0; i < adj[s].size(); i++)
	{
		if(visited[adj[s][i]] == false)
			size = size + dfs(adj[s][i]);
	}

	return size;
}

void solve()
{
	init();

	int N,M; //nodes and edges
	cin>>N>>M;

	int a,b;

	for(int i = 0; i < M; i++)
	{
		cin>>a>>b;

		adj[a].pb(b);
		adj[b].pb(a);
	}

	//find size of each connected component

	//result is size of the largest component

	int size,res = 0;

	for(int i = 1; i <= N; i++)
	{
		if(visited[i] == false)
		{
			size = dfs(i);
			res = max(res,size);
		}	
	}

	cout<<res<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
}