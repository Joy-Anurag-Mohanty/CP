#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

ll N,inp;
vector<ll>V;

void solve()
{
	cin>>N;

	for(ll i = 0; i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	ll curr_max = V[0], res = 0;

	for(ll i = 1; i < N; i++)
	{
		if(V[i] > curr_max)
			curr_max = V[i];

		else
			res += (curr_max - V[i]);

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