#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int mxN = 21;
int H,W;
char mat[mxN][mxN];
bool visited[mxN][mxN];
int dist[mxN][mxN];

pair<int,int>directions[4] = {{1,0},{0,1},{-1,0},{0,-1}};

bool isValidMove(int x,int y)
{
    return (x >= 0 && y >=0 && x < H && y <  W);
}

int bfs(int x,int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});

    dist[x][y] = 0;
    visited[x][y] = true;

    int size = 0;

    while(!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;

        q.pop();

        for(auto dir : directions)
        {
            int new_row = row + dir.first;
            int new_col = col + dir.second;

            if(isValidMove(new_row,new_col) && !visited[new_row][new_col] && mat[new_row][new_col] == '.')
            {
                q.push({new_row,new_col});
                dist[new_row][new_col] = dist[row][col] + 1;
                visited[new_row][new_col] = true;
                size = max(size,dist[new_row][new_col]);
            } 
        }
    }

    return size;
}

void solve()
{
    cin>>H>>W;

    for(int i = 0 ; i < H; i++)
        for(int j = 0 ; j < W; j++)
            cin>>mat[i][j];
    
    int ans = 0;

    for(int i = 0; i < H; i++)
    {
        for(int j = 0 ; j < W; j++)
        {
            if(mat[i][j] == '.')
            {
                memset(visited,false,sizeof(visited));
                memset(dist,0,sizeof(dist));
                ans = max(ans,bfs(i,j));
            }
        }
    }
    
    cout<<ans<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}