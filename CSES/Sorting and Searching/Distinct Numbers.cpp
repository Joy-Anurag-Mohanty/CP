#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

void solve()
{
	ll N,inp;
	cin>>N;

	set<ll>S;

	for(ll i = 0;i < N; i++)
	{
		cin>>inp;
		S.insert(inp);
	}

	cout<<S.size()<<endl;
	
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	solve();

	return 0;
}