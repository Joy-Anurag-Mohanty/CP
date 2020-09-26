#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

//For a Directed Rooted tree the indegree is 1 for all nodes except the root which has indegree 0

//If we have x nodes with indegree 0 the result is x - 1;


void solve()
{
    int N;
    cin>>N;

    vector<int>in(N+1,0); //indegree (1-based indexing)

    for(int i = 0; i < N - 1; i++)
    {
        int u,v;
        cin>>u>>v;

        in[v]++;
    }

    int count = 0;

    for(int i = 1; i <= N; i++)
    {
        if(in[i] == 0)
            count++;
    }

    cout<<count - 1<<endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin>>T;

    while(T--)
        solve();

    return 0;
}