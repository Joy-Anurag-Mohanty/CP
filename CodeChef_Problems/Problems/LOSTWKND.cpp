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
		vector<int>V;

		int inp;

		for(int i = 0;i<5;i++)
		{
			cin>>inp;
			V.pb(inp);
		}

		int p;
		cin>>p;

		for(int i = 0;i<5;i++)
			V[i] = V[i] * p;

		for(int i = 0;i<5;i++)
			V[i] = V[i] - 24;

		int sum = accumulate(V.begin(),V.end(),0);

		//cout<<sum<<endl;

		if(sum <= 0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}

	return 0;
}