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

	ll A,B,C,K;

	cin>>A>>B>>C>>K;

	ll sum = 0;

	while(K!=0 && A!=0)
	{
		sum = sum + 1;
		A--;
		K--;
	}

	while(K!=0 && B!=0)
	{
		sum = sum + 0;
		B--;
		K--;
	}

	while(K!=0 && C!=0)
	{
		sum = sum - 1;
		C--;
		K--;
	}

	cout<<sum<<endl;
	
	return 0;
}