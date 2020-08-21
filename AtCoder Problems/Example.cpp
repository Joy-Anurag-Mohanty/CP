#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	ll X,K,D,res = 0;
	cin>>X>>K>>D;

	X = abs(X);

	if(X/D >= K)
		res = X - D*K;

	else
	{
		ll temp = X/D;
		K = K - temp;
		X = X - temp*D;

		if(K % 2)
			X = abs(X - D);
		res = X;
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