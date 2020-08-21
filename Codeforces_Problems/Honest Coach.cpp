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
		int N;
		cin>>N;

		vector<int>V;

		for(int i = 0;i<N;i++)
		{
			int inp;
			cin>>inp;
			V.pb(inp);
		}

		sort(V.begin(),V.end());

		int min = INT_MAX;

		for(int i = 1;i<N;i++)
		{
			if(V[i] - V[i-1] < min)
				min = V[i] - V[i-1];
		}

		cout<<min<<endl;

	}

	return 0;

}