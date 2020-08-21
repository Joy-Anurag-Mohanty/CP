#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

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

		vector<ll>V;

		for(ll i = 0;i<N;i++)
		{
			ll inp;
			cin>>inp;
			V.pb(inp);
		}

		ll count = 0;

		//find the smallest number and it's index

		ll practical_min = V[0];

		for(ll i = 0;i<N;i++)
		{
			practical_min = min(practical_min,V[i]);
			count = count + practical_min;
		}

		cout<<count<<endl;

	}

	return 0;
		
}