#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll T;
	cin>>T;

	while(T--)
	{
		ll N;
		cin>>N;

		//dividing N by the powers of 5

		ll count = 0;

		for(ll i = 5;N/i >= 1; i *= 5)
			count += N/i;

		cout<<count<<endl;
	}

	return 0;
}