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
		int N,S;
		cin>>N>>S;

		// cout<<N<<endl;

		int Sc = 100 - S;

		vector<int>V1,V2;

		int inp,p0 = 100,p1 = 100;

		for(int i = 0;i<N;i++)
		{
			cin>>inp;
			V1.pb(inp);
		}

		for(int i = 0;i<N;i++)
		{
			cin>>inp;
			V2.pb(inp);
		}

		for(int i = 0;i<N;i++)
		{
			if(V2[i] == 0)
			{
				if(p0 >= V1[i])
					p0 = V1[i];
			}

			else
			{
				if(p1 >= V1[i])
					p1 = V1[i];
			}
		}

		// cout<<p0<<" "<<p1<<endl;

		int sum = p0 + p1;

		if(sum <= Sc)
			cout<<"yes"<<endl;

		else
			cout<<"no"<<endl;

	}

	return 0;
}