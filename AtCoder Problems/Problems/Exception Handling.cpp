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

	ll N;
	cin>>N;

	vector<ll>V,temp;

	for(ll i = 0;i<N;i++)
	{
		ll inp;
		cin>>inp;
		V.pb(inp);
		temp.pb(inp);
	}

	ll max = *max_element(V.begin(),V.end());

	sort(temp.begin(),temp.end());

	ll max2 = temp[N-2];

	// cout<<max<<endl;
	// cout<<max2<<endl;

	ll count = 0; 	//count frequency of largest

	for(ll i = 0;i<N;i++)
	{
		if(V[i] == max)
			count++;
	}

	if(count > 1)
	{
		for(ll i = 0;i<N;i++)
			cout<<max<<endl;
	}

	else
	{
		for(ll i = 0;i<N;i++)
		{
			if(V[i] != max)
				cout<<max<<endl;
			else
				cout<<max2<<endl;
		}
	}

	return 0;
}