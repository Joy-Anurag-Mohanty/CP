#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll N;
	cin>>N;

	vector<ll>V;

	for(ll i = 0;i<N;i++)
	{
		ll inp;
		cin>>inp;
		V.push_back(inp);
	}

	sort(V.begin(),V.end());

	ll price = V[N-1];

	for(ll i = N-2;i>=0;i--)
	{
		if(price < V[i] * (N-i))
			price = V[i] * (N-i); 
	}

	cout<<price<<endl;

	return 0;
}