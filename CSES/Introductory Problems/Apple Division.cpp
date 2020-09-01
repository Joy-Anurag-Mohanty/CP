#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

ll minDiff(vector<ll>V)
{
	ll sum = 0,res = 0;

	for(ll i = 0; i < V.size(); i++)
		sum += V[i];

	//iterate through all subsets

	for(ll i = 0 ; i < 1 << V.size(); i++)
	{
		ll sub = 0;

		for(ll j = 0; j < V.size(); j++)
		{
			if(i >> j & 1)
				sub += V[j];
		}

		if(sub <= sum/2)
			res = max(res,sub);
	}

	ll diff = sum - 2*res;

	return diff;
}

void solve()
{
	ll N,inp;
	cin>>N;

	vector<ll>V;

	for(ll i = 0; i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	cout<<minDiff(V);
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