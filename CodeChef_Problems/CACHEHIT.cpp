#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int N,B,M;
	cin>>N>>B>>M;

	vector<int>V;

	int count = 0;

	while(M--)
	{
		int x;
		cin>>x;

		int row = x / B;

		V.pb(row);
	}

	// for(int i = 0;i<V.size();i++)
	// 	cout<<V[i]<<" ";
	// cout<<endl;

	vector<int>::iterator ip;

	ip = unique(V.begin(),V.end());
	V.resize(distance(V.begin(),ip));

	cout<<V.size()<<endl;
	
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