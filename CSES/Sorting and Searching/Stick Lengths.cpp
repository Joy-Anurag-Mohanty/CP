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


	sort(V.begin(),V.end());

	if(N % 2 == 0)
	{
		ll mid_h = V[N/2];
		ll mid_l = V[N/2 - 1];

		ll cost_h = 0;
		ll cost_l = 0;

		for(ll i = 0; i < N; i++)	
		{
			cost_h += abs(V[i] - mid_h);
			cost_l += abs(V[i] - mid_l);
		}

		cout<<min(cost_l,cost_h);
	}

	else
	{
		ll mid = V[N/2];

		ll cost = 0;

		for(ll i = 0; i < N; i++)
		{
			cost += abs(V[i] - mid);
		}

		cout<<cost;
	}
	
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