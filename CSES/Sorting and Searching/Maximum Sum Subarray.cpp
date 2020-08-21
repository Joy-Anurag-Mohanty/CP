#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

void solve()
{
	ll N,inp;
	cin>>N;

	vector<ll>V;

	for(ll i = 0;i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	//Kadane's Algorithm

	ll max_so_far = V[0], curr_max = V[0];

	for(ll i = 1; i < N; i++)
	{
		curr_max = max(V[i],curr_max + V[i]);
		max_so_far = max(max_so_far,curr_max);
	}

	cout<<max_so_far<<endl;
	
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