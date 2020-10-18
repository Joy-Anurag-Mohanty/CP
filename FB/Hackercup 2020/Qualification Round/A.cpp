#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void printVec(vector<char>V)
{
	for(int i = 0;i<V.size();i++)
		cout<<V[i]<<" ";
	cout<<endl;
}

void printGraph(vector<int>adj[],int nodes)
{
	for(int i = 0;i<nodes;i++)
	{
		cout<<"adjacency list of node "<<i<<": ";

		for(int j = 0;j<adj[i].size();j++)
		{
			if(j == adj[i].size() - 1)
				cout<<adj[i][j]<<endl;

			else
				cout<<adj[i][j]<<"-->";
		}
	}
}

bool isReachable(vector<int>adj[],int s,int d,int V)
{
	if(s == d)
		return true;

	bool *visited = new bool[V];

	for(int i = 0;i<V;i++)
	{
		visited[i] = false;
	}

	list<int>queue;

	visited[s] = true;
	queue.push_back(s);

	vector<int>::iterator i;

	while(!queue.empty())
	{
		s = queue.front();
		queue.pop_front();

		for(i = adj[s].begin(); i != adj[s].end(); ++i)
		{
			if(*i == d)
				return true;

			if(!visited[*i])
			{
				visited[*i] = true;
				queue.push_back(*i);
			}
		}
	}

	return false;

}

void graphgen(vector<char>I,vector<char>O)
{
	int edges = 0;
	int nodes = I.size();

	vector<int>adj[nodes]; //adjacency list
	bool adj_b[nodes][nodes];

	for(int i = 0;i<nodes;i++)
		for(int j = 0;j<nodes;j++)
			adj_b[i][j] = false;

	vector<int>From;
	vector<int>To;


	for(int i = 0;i<nodes - 1;i++)
	{
		int x = i; //node x
		int y = i + 1; //node y

		if(O[x] == 'Y' && I[y] == 'Y')
		{
			//edge exists from x -> y

			//cout<<x<<" "<<y<<endl;

			From.pb(x);
			To.pb(y);

			edges++;
		}

		if(O[y] == 'Y' && I[x] == 'Y')
		{
			//edge exists from y -> x

			//cout<<y<<" "<<x<<endl;

			From.pb(y);
			To.pb(x);

			edges++;
		}
	}

	//self loops also exits

	for(int i = 0;i<nodes;i++)
	{
		From.pb(i);
		To.pb(i);
		edges++;
	}


	//cout<<"Number of edges = "<<edges<<endl;

	for(int i = 0;i<edges;i++)
	{
		//cout<<From[i]<<" "<<To[i]<<endl;

		adj[From[i]].pb(To[i]);
		adj_b[From[i]][To[i]] = true;
	}

	//printGraph(adj,nodes);

	char mat[nodes][nodes];

	for(int i = 0;i<nodes;i++)
	{
		for(int j = 0;j<nodes;j++)
		{
			bool val = isReachable(adj,i,j,nodes);

			if(val == true)
				mat[i][j] = 'Y';
			else
				mat[i][j] = 'N';
		}
	}

	//print mat

	for(int i = 0;i<nodes;i++)
	{
		for(int j = 0;j<nodes;j++)
		{
			cout<<mat[i][j];
		}

		cout<<endl;
		
	}

}

void solve()
{
	int N;
	char inp;
	cin>>N;

	vector<char>I;
	vector<char>O;

	for(int i = 0;i < N; i++)
	{
		cin>>inp;
		I.pb(inp);
	}

	for(int i = 0;i < N; i++)
	{
		cin>>inp;
		O.pb(inp);
	}

	// printVec(I);
	// printVec(O);

	//generate directed graph

	graphgen(I,O);

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	int cs = 1;

	while(T--)
	{
		cout<<"Case #"<<cs<<":"<<endl;
		solve();
		cs++;
	}
}