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
	
	int N,K;
	cin>>N>>K;

	vector<int>V;

	int d;

	while(K--)
	{
		cin>>d;

		int inp;

		for(int i = 0;i<d;i++)
		{
			cin>>inp;
			V.pb(inp);
		}
	}

	unordered_map<int,int>mp;

	for(int i = 0;i<V.size();i++)
		mp[V[i]]++;

	int count = 0;

	for(int i = 1;i<=N;i++)
	{
		if(mp[i] == 0)
			count++;
	}

	cout<<count<<endl;

	return 0;
}