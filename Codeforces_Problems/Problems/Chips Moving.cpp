#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	vector<ll>V;

	for(int i = 0;i<N;i++)
	{
		ll inp;
		cin>>inp;
		V.pb(inp);
	}
	
	int e = 0, o = 0;

	for(int i = 0;i<N;i++)
	{
		if(V[i] % 2 == 0)
			e++;
		else
			o++;
	}

	int ans = (e>o)?o:e;

	cout<<ans<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
}