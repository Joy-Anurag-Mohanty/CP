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
		int G;
		cin>>G;

		while(G--)
		{
			ll N;

			int I,Q;

			cin>>I>>N>>Q;
			

			if(N % 2 == 0 || I == Q)
				cout<<N/2<<endl;
			else
				cout<<N/2 + 1<<endl;
		}
			
	}

	return 0;
}