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
		ll K;

		ll D0,D1;
		cin>>K>>D0>>D1;

		ll temp = D0 + D1;

		ll ans = temp;

		ll sum = (2*temp) % 10 + (4*temp) % 10 + (8*temp) % 10 + (6*temp) % 10;

		K -= 2;

		if( K > 0)
		{
			ans += (temp % 10);
			K--;
		}

		ans += (K/4) * sum;

		K = K % 4;

		ll Q = 2;

		while(K--)
		{
			ans += (Q*temp) % 10;
			Q = (Q*2)%10;
		}

		if(ans % 3 == 0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;

	}

	return 0;
}