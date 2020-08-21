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

	// int cs = 1;

	while(T--)
	{
		ll N,K;
		cin>>N>>K;

		// cout<<"Case #"<<cs<<" ";
	
		ll res = N;

		for(ll i = 1;i<=sqrt(N);i++)
		{
			if(N % i == 0)
			{
				if(i <= K)
					res = min(res,N/i);
				if(N/i <= K)
					res = min(res,i);
			}
		}

		cout<<res;

		cout<<endl;

		// cs++;
	}

	return 0;

}