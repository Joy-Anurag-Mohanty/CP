#include<bits/stdc++.h>
#define ll long long
using namespace std;

#define pb push_back

ll XORmin(vector<ll>A)
{
	sort(A.begin(),A.end());

	ll minXOR = LONG_MAX;
	ll val = 0;

	for(ll i = 0;i<A.size()-1;i++)
	{
		val = A[i] ^ A[i+1];
		minXOR = min(minXOR,val);
	}

	return minXOR;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
	{
		ll N;
		cin>>N;

		vector<ll>A;

		for(ll i = 0;i<N;i++)
		{
			ll inp;
			cin>>inp;
			A.pb(inp);
		}

		cout<<XORmin(A)<<endl;
	}
}