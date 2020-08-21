#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	ll N;
	cin>>N;

	vector<ll>V;

	for(int i = 0;i<N;i++)
	{
		int inp;
		cin>>inp;
		V.pb(inp);
	}

	ll skips = 0;

	for(int i = 0;i<N-1;i++)
	{
		skips += abs(V[i+1] - V[i]) - 1;
	}

	cout<<skips<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

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
