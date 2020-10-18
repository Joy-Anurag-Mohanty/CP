#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	#endif

	int T;
	cin>>T;

	while(T--)
	{
		ll N;
		cin>>N;

		ll even_count = 0;
		ll odd_count = 0;

		for(ll i = 0;i<N;i++)
		{
			ll inp;
			cin>>inp;
			if(inp % 2 == 0)
				even_count++;
			else
				odd_count++;
		}

		cout<<even_count*odd_count
	}

	return 0;
}