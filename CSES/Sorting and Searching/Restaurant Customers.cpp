#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

const ll MOD = 1e9 + 7;

void solve()
{
	ll N,a,b;
	cin>>N;

	int temp = N;

	vector<ll>arrival;
	vector<ll>leave;

	while(temp--)
	{
		cin>>a>>b;

		arrival.pb(a);
		leave.pb(b);
	}

	sort(arrival.begin(),arrival.end());
	sort(leave.begin(),leave.end());

	ll maxi = 0, curr = 0, i = 0, j = 0;

	while( i < N && j < N )
	{
		if(arrival[i] < leave[j])
		{
			curr++;
			i++;
		}

		else
		{
			curr--;
			j++;
		}

		if(maxi < curr)
			maxi = curr;
	}

	cout<<maxi<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	solve();

	return 0;
}