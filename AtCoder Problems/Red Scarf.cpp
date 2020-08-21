#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

vector<ll>V;

void solve(ll N)
{
	ll res = 0;

	for(ll i = 0;i<N;i++)
	{
		res ^= V[i];
	}

	for(ll i = 0;i<N;i++)
		V[i] = res ^ V[i];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll N;
	cin>>N;

	for(ll i = 0;i<N;i++)
	{
		ll inp;
		cin>>inp;
		V.pb(inp);
	}

	solve(N);

	for(ll i = 0;i<N;i++)
		cout<<V[i]<<" ";

	return 0;
} 