#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MOD = 1e9 + 7;

ll N,X,inp,cnt = 0;
vector<ll>V;

void solve()
{
	cin>>N>>X;

	for(ll i = 0 ; i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	sort(V.begin(),V.end());

	ll p1 = 0, p2 = N - 1;

	while(p1 <= p2)
	{
		if(V[p1] + V[p2] > X)
			p2--;

		else
		{
			p1++;
			p2--;
		}

		cnt++;
	}

	cout<<cnt<<endl;
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