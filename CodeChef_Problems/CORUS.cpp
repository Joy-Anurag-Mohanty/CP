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
		ll N,Q;
		cin>>N>>Q;

		string str;
		cin>>str;

		unordered_map<char,int>mp;

		for(int i = 0;i<str.length();i++)
			mp[str[i]]++;

		// for(auto x : mp)
		// 	cout<<x.first<<" "<<x.second<<endl;

		while(Q--)
		{
			ll C;
			cin>>C;

			ll sum = 0;

			ll sub;

			for(auto x : mp)
			{
				sub = x.second - C;

				if(sub < 0)
					sub = 0;

				sum = sum + sub;
			}

			cout<<sum<<endl;
		}
	}

	return 0;
}