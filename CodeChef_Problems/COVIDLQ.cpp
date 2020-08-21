#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

// 	freopen("Input.txt","r",stdin);
// 	freopen("Output.txt","w",stdout);

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
			V.push_back(inp);
		}

		vector<int>I; //indices of 1 in V

		for(int i = 0;i<N;i++)
			if(V[i] == 1)
				I.pb(i);

		int flag = 1;

		for(int i = 0;i<I.size()-1;i++)
			if(I[i+1] - I[i] < 6)
			{
				flag = 0;
				break;
			}

		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	return 0;
}