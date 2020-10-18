#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

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

		ll P = 0; //computes the profit

		vector<ll>V;

		ll mod = 1000000007;

		for(ll i = 0;i<N;i++)
		{
			ll inp;
			cin>>inp;
			V.pb(inp);
		}

		sort(V.rbegin(),V.rend());

		// for(ll i = 0;i<V.size();i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

		for(ll i = 1;i<N;i++)
		{
			if(V[i] != 0 && V[i] >= i)
				V[i] = V[i] - i;

			else if(V[i] < i && V[i] != 0)
				V[i] = 0;
		}

		// for(ll i = 0;i<N;i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;	

		for(ll i = 0;i<N;i++)
		{
			P = (P+V[i]);
		}

		cout<<P % mod<<endl;
	}

	return 0;
}