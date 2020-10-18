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

	int T;
	cin>>T;

	while(T--)
	{
		ll X,K;
		cin>>X>>K;

		//find power of prime factors of X

		ll power = 0;

		while(X % 2 == 0)
		{
			//cout<<2<<" ";
			power++;
			X = X/2;
		}

		for(ll i = 3;i<=sqrt(X);i = i+2)
		{
			while(X % i == 0)
			{
				//cout<<i<<" ";
				power++;
				X = X/i;
			}
		}

		if(X>2)
		{
			power++;
			//cout<<X<<" ";
		}

		//cout<<endl;

		//cout<<power<<endl;

		if(power >= K)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}

	return 0;
}