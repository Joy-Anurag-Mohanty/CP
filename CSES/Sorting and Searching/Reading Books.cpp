#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MOD = 1e9 + 7;

ll N,inp;
vector<ll>V;

ll timetaken()
{	
	sort(V.begin(),V.end());

	ll sum = 0;

	for(ll i = 0; i < N; i++)
		sum += V[i];

	return (max(sum,2*V[V.size() - 1]));
}

void solve()
{
	cin>>N;

	for(ll i = 0 ; i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	cout<<timetaken()<<endl;
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