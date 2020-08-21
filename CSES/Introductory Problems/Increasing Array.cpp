#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
void solve()
{
	ll N,inp;
	cin>>N;
 
	vector<int>V;
 
	for(int i = 0;i<N;i++)
	{
		cin>>inp;
		V.pb(inp);
	}
 
	ll count = 0;
 
	for(int i = 0;i < N - 1; i++)
	{
		if(V[i+1] < V[i])
		{
			count = count + V[i] - V[i+1];
			V[i + 1] = V[i]; 
		}
	}
 
	cout<<count;
 
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);
 
	solve();
 
	return 0;
}
