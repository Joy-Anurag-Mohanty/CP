#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll N,M;
	cin>>N>>M;

	ll sum = 0;

	ll A;

	for(ll i = 0;i<M;i++)
	{
		cin>>A;
		sum += A;
	}

	// cout<<sum<<endl;

	ll diff = N - sum;

	if(diff>=0)
		cout<<diff<<endl;
	else
		cout<<-1<<endl;

	return 0;
}