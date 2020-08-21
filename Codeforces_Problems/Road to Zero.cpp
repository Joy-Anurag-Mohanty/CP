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
		ll x,y;
		cin>>x>>y;

		ll a,b;
		cin>>a>>b;

		ll g = max(x,y);
		//cout<<g<<endl;

		ll s = min(x,y);
		//cout<<s<<endl;

		ll c1 = a*(x+y);

		ll c2 = b*s + a*(g-s);

		cout<<min(c1,c2)<<endl;
	}

	return 0;

}