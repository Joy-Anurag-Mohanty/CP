#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int MOD = 1e9 + 7;

ll solve(ll a, ll b)
{
	if(b == 0)
	{
		return 1;
	}

	a = a % MOD;
	b = b % MOD;

	if(a == 0)
	{
		return 0;	
	}

	ll res = 1;

	while(b > 0)
	{
		if(b & 1)
			res = (res * a) % MOD;

		b = b >> 1;
		a = (a * a) % MOD;
	}

	return res % MOD;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
	{
		ll a,b,c;
		cin>>a>>b>>c;

		ll temp = solve(b,c);
		ll ans = solve(a,temp);

		//cout<<temp<<" ";
		cout<<ans<<endl;
	}

	return 0;
}