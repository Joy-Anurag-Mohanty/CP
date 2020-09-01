#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MOD = 1e9 + 7;

vector<ll>V;
ll N,inp;

void solve()
{
	cin>>N;

	//longest non-decreasing subequence

	for(ll i = 0 ; i < N; i++)
	{
		cin>>inp;

		ll p = upper_bound(V.begin(),V.end(),inp) - V.begin();

		if(p < V.size())
			V[p] = inp;
		else
			V.pb(inp);
	}

	cout<<V.size()<<endl;
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