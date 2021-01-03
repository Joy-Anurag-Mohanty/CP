#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<pair<ll,ll>>voters;

int main()
{
	ll N;
	cin>>N;

	ll pro_A = 0, pro_T = 0;

	for(int i = 0; i < N; i++)
	{
		ll a,t;
		cin>>a>>t;
		voters.push_back(make_pair(a,t));
		pro_A += a;
	}

	sort(voters.begin(),voters.end(),[](pair<ll,ll>&p,pair<ll,ll>&q)
	{
		return p.first * 2 + p.second > q.first * 2 + q.second;
	});

	for(int i = 0; i < N; i++)
	{
		if(pro_A < pro_T)
		{
			cout<<i<<endl;
			return 0;
		}

		pro_A -= voters[i].first;
		pro_T += voters[i].first + voters[i].second;
	}
	
	cout<<N<<endl;
}
