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
		int N;
		cin>>N;

		int max_profit = 0;

		for(int i = 0;i<N;i++)
		{
			int s,p,v;
			cin>>s>>p>>v;

			max_profit = max((p/(s+1))*v,max_profit);
		}

		cout<<max_profit<<endl;
	}

	return 0;
}