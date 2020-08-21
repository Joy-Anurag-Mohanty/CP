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
		int N;
		cin>>N;

		vector<int>V; //max speed vector

		for(int i = 0;i<N;i++)
		{
			int inp;
			cin>>inp;
			V.push_back(inp);
		}

		// for(int i = 0;i<N;i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

		vector<int>S; //actual speed vector

		for(int i = 0;i<N;i++)
			S.push_back(V[i]);


		// for(int i = 0;i<N;i++)
		// 	cout<<S[i]<<" ";
		// cout<<endl;

		for(int i = 0;i<N-1;i++)
		{
			if(S[i+1]>S[i])
			{
				int diff = S[i+1] - S[i];

				S[i + 1] = S[i + 1] - diff;
			}
		}


		// for(int i = 0;i<N;i++)
		// 	cout<<S[i]<<" ";
		// cout<<endl;	

		int count = 0;

		for(int i = 0;i<N;i++)
			if(V[i] == S[i])
				count++;

		cout<<count<<endl;
	}

	return 0;
}