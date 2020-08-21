#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int mxN = 1001;
const int mxM = 1001;

char adj[mxN][mxM];
bool visited[mxN][mxM];
int N,M;

vector<char>Path;

void init()
{
	for(int i = 0; i < mxN; i++)
		for(int j = 0; j < mxM; j++)
			visited[i][j] = false;
}

void printGraph(int N,int M)
{
	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= M; j++)
			cout<<adj[i][j]<<" ";
		cout<<endl;
	}
}

void createGraph(int N,int M)
{
	char inp;

	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= M; j++)
		{
			cin>>inp;

			adj[i][j] = inp;
		}
	}
}

bool isValidMove(int X,int Y)
{
	if(X < 1 ||  X > N || Y < 1 || Y > M)
		return false;

	if(visited[X][Y] == true || adj[X][Y] == '#')
		return false;

	return true;
}

void dfs(int x,int y)
{
	visited[x][y] = true;
	
	if(isValidMove(x - 1,y))
	{
		Path.pb(adj[x][y]);

		//cout<<'D';

		if(adj[x][y] == 'B')
			return;

		dfs(x - 1,y);
	}

	if(isValidMove(x,y + 1))
	{
		Path.pb(adj[x][y]);

		//cout<<'R';

		if(adj[x][y] == 'B')
			return;

		dfs(x,y + 1);
	}

	if(isValidMove(x + 1,y))
	{
		Path.pb(adj[x][y]);

		//cout<<'U';

		if(adj[x][y] == 'B')
			return;

		dfs(x + 1,y);
	}

	if(isValidMove(x,y - 1))
	{
		Path.pb(adj[x][y]);

		//cout<<'L';

		if(adj[x][y] == 'B')
			return;

		dfs(x,y - 1);
	}

}

void solve()
{
	init();

	cin>>N>>M;

	createGraph(N,M);
	//printGraph(N,M);

	//get co-ordinate of source

	int x,y;

	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= M; j++)
		{
			if(adj[i][j] == 'A')
			{
				x = i;
				y = j;
				break;
			}
		}
	}

	//cout<<x<<" "<<y<<endl;

	for(int i = x; i <= N; i++)
	{
		for(int j = y; j <= M; j++)
		{
			if(adj[i][j] == '.' || adj[i][j] == 'A' && visited[i][j] == false)
				dfs(i,j);
		}
	}

	for(int i = 0; i < Path.size(); i++)
		cout<<Path[i]<<" ";
	cout<<endl;
	
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
}