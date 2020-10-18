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
	
	ll N;
	cin>>N;

	vector<string>V;

	string str;

	ll temp = N;

	while(temp--)
	{
		cin>>str;
		V.pb(str);
	}

	unordered_map<string,ll>mp;

	for(ll i = 0;i<N;i++)
	{
		mp[V[i]]++;
	}

	ll count = 0;

	for(auto x : mp)
		count++;

	cout<<count<<endl;

	return 0;
}