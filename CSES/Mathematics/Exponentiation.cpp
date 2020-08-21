#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const int MOD = 1e9 + 7;

void solve()
{
	ll a,b;
	cin>>a>>b;

	if(b == 0)
	{
		cout<<1<<endl;
		return;
	}

	a = a % MOD;

	if(a == 0)
	{
		cout<<0<<endl;
		return;
	}

	ll res = 1;

	while(b > 0)
	{
		if(b & 1)
			res = (res * a) % MOD;

		b = b >> 1;
		a = (a * a) % MOD;
	}

	cout<<res<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
		solve();

	return 0;
}