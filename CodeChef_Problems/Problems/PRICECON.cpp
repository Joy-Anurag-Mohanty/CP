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
		int N,K;
		cin>>N>>K;

		vector<int>V;

		for(int i = 0;i<N;i++)
		{
			int inp;
			cin>>inp;
			V.pb(inp);
		}

		int loss = 0;

		for(int i = 0;i<N;i++)
		{
			if(V[i] > K)
				loss += V[i] - K;
		}

		cout<<loss<<endl;
	}

	return 0;
}