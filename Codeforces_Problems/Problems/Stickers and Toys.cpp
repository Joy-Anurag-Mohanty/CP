#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	ll N,S,T;
	cin>>N>>S>>T;

	ll stickers = N - S; //only stickers
	ll toys = N - T; //only toys

	ll res = max(stickers,toys) + 1;

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