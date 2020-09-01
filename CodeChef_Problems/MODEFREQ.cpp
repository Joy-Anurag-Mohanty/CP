#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

void solve()
{
	int N,inp;
	cin>>N;

	vector<int>V;

	for(int i = 0 ; i < N; i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	map<int,int>mp;

	for(auto x : V)
		mp[x]++;

	map<int,int>mp_new;

	for(auto x : mp)
	{
		//cout<<x.first<<" "<<x.second<<endl;
		mp_new[x.second]++;
	}

	int max_freq = INT_MIN, val = INT_MAX;

	for(auto x : mp_new)
	{
		if(x.second > max_freq)
		{
			max_freq = x.second;

			val = x.first;
		}

		if(x.second == max_freq)
		{
			val = min(val,x.first);
		}
	}

	cout<<val<<endl;
	//cout<<endl;
}	

int main(int argc, char const *argv[])
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	//int cs = 1;

	while(T--)
	{
		// cout<<"case #"<<cs<<": "<<endl;
		solve();
		// cs++;

		//cout<<endl;
	}

	return 0;
}