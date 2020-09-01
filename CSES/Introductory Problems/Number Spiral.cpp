#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

void solve()
{
	ll r,c,res;
	cin>>r>>c;

	ll temp = max(r,c);

	if(temp % 2)
	{
		if(r == temp)
			res = (temp-1)*(temp-1) + c;
		else
			res = (temp-1)*(temp-1) +  2*(temp) - r; 
	}

	else
	{
		if(c == temp)
			res = (temp-1)*(temp-1) + r;
		else
			res = (temp-1)*(temp-1) + 2*(temp)  - c;
	}

	cout<<res<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
		solve();

	return 0;
}