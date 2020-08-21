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

		int o = 0,e = 0;

		for(int i = 0;i<N;i++)
			if(V[i] % 2 == 0)
				e++;
			else
				o++;

		if(e % 2 == 0 && o % 2 == 0)
			cout<<"YES"<<endl;
		else
		{
			sort(V.begin(),V.end());

			int diff = 0;

			for(int i = 1;i<N;i++)
				if(V[i] - V[i-1] == 1)
					diff++;

			if(diff >= 1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
	}

	return 0;

}