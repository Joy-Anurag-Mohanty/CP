#include<bits/stdc++.h>
using namespace std;
#define ll long long

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
		ll inp;
		cin>>inp;

		vector<ll>V; //store the digits

		ll temp = inp;

		while(temp!=0)
		{
			V.push_back(temp%10);
			temp /= 10;
		}

		//removing leading zeros

		ll ind = -1; //index to store first non-zero integer

		for(ll i = 0;i<V.size();i++)
			if(V[i] != 0)
			{
				ind = i;
				break;
			}

		for(ll i = ind;i<V.size();i++)
			cout<<V[i];
		cout<<endl;
	}

	return 0;
}