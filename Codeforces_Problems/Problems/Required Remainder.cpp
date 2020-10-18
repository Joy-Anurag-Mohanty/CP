#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	ll x,y,n;
	cin>>x>>y>>n;

	ll m = floor((n - y)/x);

	//cout<<m<<endl;

	cout<<m*x + y<<endl;
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