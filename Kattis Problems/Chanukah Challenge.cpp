#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll P;
	cin>>P;

	while(P--)
	{
		ll K,N;
		cin>>K>>N;

		ll candles = (N*(N+1))/2 + N;

		cout<<K<<" "<<candles<<endl;
	}

	return 0;
}