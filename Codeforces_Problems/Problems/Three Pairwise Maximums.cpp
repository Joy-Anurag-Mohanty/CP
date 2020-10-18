#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	ll x,y,z;
	cin>>x>>y>>z;

	vector<ll>V;

	V.pb(x);
	V.pb(y);
	V.pb(z);

	//find maximmum of x,y,z;

	ll m;

	m = max(x,y);
	m = max(m,z);

	//count number of times it occurs

	int count = 0;

	if(m == x)
		count++;
	if(m == y)
		count++;
	if(m == z)
		count++;

	if(count == 2)
	{
		cout<<"YES"<<endl;

		ll second;

		for(int i = 0;i<3;i++)
		{
			if(m != V[i])
			{
				second = V[i];
				break;
			}
		}

		if(second == 1)
		{
			cout<<m<<" "<<1<<" "<<1<<endl;
		}

		else
		{
			cout<<m<<" "<<second<<" "<<second-1<<endl;
		}
	}

	else if(count == 3)
	{
		cout<<"YES"<<endl;
		cout<<m<<" "<<m<<" "<<m<<endl;
	}

	else
		cout<<"NO"<<endl;
}

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
		solve();
	}

	return 0;
}