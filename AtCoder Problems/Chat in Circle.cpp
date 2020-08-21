#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve()
{
	ll N,inp;
	cin>>N;

	vector<ll>V;

	for(ll i = 0;i<N;i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	if(N == 2)
		cout<<*max_element(V.begin(),V.end());
	
	else
	{
		sort(V.begin(),V.end());

		// for(int i = 0;i<V.size();i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

		ll sum = V.back();

		//cout<<sum<<endl;

		V.pop_back();

		ll index = 0;

		sort(V.begin(),V.end(),greater<ll>());

		// for(int i = 0;i<V.size();i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

		N = N - 2;

		if(N % 2 == 0)
		{
			ll index = 0;
			
			ll t = N/2;

			//cout<<t<<endl;

			ll cnt = 0;

			while(cnt < t)
			{
				//cout<<V[index]<<endl;
				sum = sum + (V[index]*2);
				//cout<<sum<<endl;
				index++;
				cnt++;
			}
		}

		else
		{
			ll index = 0;
			
			ll t = N/2;

			ll cnt = 0;

			while(cnt < t)
			{
				sum = sum + (V[index]*2);
				index++;
				cnt++;
			}

			sum = sum + V[index];
		}

		cout<<sum<<endl;
	}


}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
} 