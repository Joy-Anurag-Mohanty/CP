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
		ll N,K;
		cin>>N>>K;

		N = N - 1;

		if(K <= N)
			cout<<K<<endl;

		else
		{
			ll temp = K/N;

			ll near = temp * N;

			ll diff = K - near;

			ll num = (N+1)*temp - 1;

			if(diff == 0)
				cout<<num<<endl;
			else if(diff == 1)
				cout<<num+2<<endl;
			else
				cout<<num + 2 + (diff-1)*1<<endl;
		}
	}

	return 0;

}