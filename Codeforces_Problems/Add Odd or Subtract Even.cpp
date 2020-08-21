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
		ll a,b;
		cin>>a>>b;

		ll d,moves;

		if(b>a)
		{
			d = b - a;

			if(d % 2 != 0)
				moves = 1;
			else
				moves = 2;
		}

		else if(a>b)
		{
			d = a - b;

			if(d % 2 == 0)
				moves = 1;
			else
				moves = 2;
		}

		else
			moves = 0;

		cout<<moves<<endl;
	}

	return 0;
}