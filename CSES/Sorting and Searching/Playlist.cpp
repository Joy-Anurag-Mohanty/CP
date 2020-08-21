#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

void solve()
{
	map<ll,ll>mp;

	ll N;
	cin>>N;

	vector<ll>V;

	for(ll i = 0; i < N; i++)
	{
		ll inp;
		cin>>inp;
		V.pb(inp);
	}

	ll len = 0;

	for(ll i  = 0, j = 0; i < N; i++)
	{
		while(j < N && mp[V[j]] < 1)
		{
			mp[V[j]]++;
			j++;

		}

		len = max(j - i, len);
		mp[V[i]]--;
	}

	cout<<len;
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