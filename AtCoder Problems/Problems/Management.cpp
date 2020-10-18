#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll N;
	cin>>N;
	
	vector<ll>V;
	
	ll inp;
	
	for(ll i = 0;i<N-1;i++)
	{
		cin>>inp;
		V.push_back(inp);
	}
	
	unordered_map<ll,ll>mp;
	
	for(ll i = 0;i<V.size();i++)
	{
		mp[V[i]]++;
	}
	
	for(ll i = 1;i<=N;i++)
	{
		cout<<mp[i]<<endl;
	}
}