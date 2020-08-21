#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int mxN = 1001;
const int mxM = 1001;

char adj[mxN][mxM];
bool visited[mxN][mxM];
int N,M;

void init()
{
	for(int i = 0; i < mxN; i++)
		for(int j = 0; j < mxM; j++)
			visited[i][j] = false;
}

void printGraph(int N,int M)
{
	for(int i = 0; i < N; i++)
	{
		for(int j = 0; j < M; j++)
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
		dfs(x - 1,y);

	if(isValidMove(x,y + 1))
		dfs(x,y + 1);

	if(isValidMove(x + 1,y))
		dfs(x + 1,y);

	if(isValidMove(x,y - 1))
		dfs(x,y - 1);

}

void solve()
{
	init();

	cin>>N>>M;

	createGraph(N,M);
	//printGraph(N,M);

	//we need to find number of connected components (DFS)

	int count = 0;

	for(int i = 1; i <= N; i++)
	{
		for(int j = 1; j <= M; j++)
		{
			if(adj[i][j] == '.' && visited[i][j] ==  false)
			{
				dfs(i,j);
				count++;
			}
		}
	}

	cout<<count<<endl;

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	solve();

	return 0;
}