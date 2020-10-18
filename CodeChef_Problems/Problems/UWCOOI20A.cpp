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

		vector<ll>V;

		for(ll i = 0;i<N;i++)
		{
			ll inp;
			cin>>inp;
			V.push_back(inp);
		}

		cout<<*max_element(V.begin(),V.end())<<endl;
	}

	return 0;
}