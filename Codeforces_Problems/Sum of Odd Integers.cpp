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
		ll N,K;
		cin>>N>>K;

		if(N>=K*K && (K&1) == (N&1))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}