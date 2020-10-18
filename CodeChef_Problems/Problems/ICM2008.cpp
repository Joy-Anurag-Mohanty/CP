#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	#ifndef ONLINE_JUDGE
	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	#endif

	int T;
	cin>>T;

	while(T--)
	{
		ll a,b,c,d;
		cin>>a>>b>>c>>d;

		ll num = abs(a-b);
		ll den = abs(c-d);

		if(num == 0)
			cout<<"YES"<<endl;

		else if(num != 0 && den == 0)
			cout<<"NO"<<endl;

		else if(num % den == 0)
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;
	}

	return 0;
}