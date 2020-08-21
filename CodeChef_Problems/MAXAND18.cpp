#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
#define all(c) (c).begin(),(c).end()	

bool cmp(pair<ll,ll>&p1,pair<ll,ll>&p2)
{
	if(p1.first<p2.first)
		return false;

	else if(p1.first == p2.first)
	{
		if(p1.second > p2.second)
			return false; 
	}

	return true;
}

void solve()
{
	int N,K;
	cin>>N>>K;

	vector<ll>V(N);

	for(int i = 0;i<N;i++)
	{
		cin>>V[i];
	}

	vector<pair<ll,ll>>B(31);

	for(int i = 0;i<=30;i++)
	{
		ll c = 0;

		for(int j = 0;j<N;j++)
		{
			if(V[j] & (ll)pow((ll)2,(ll)i))
				c++;
		}

		B[i].first = c*pow((ll)2,(ll)i);
		B[i].second = i;
	}

	sort(all(B),cmp);

	ll res = 0;

	for(int i = 0;i<K;i++)
	{
		res += pow((ll)2,(ll)B[i].second);
	}

	cout<<res<<endl;

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
		solve();
	}

	return 0;
}