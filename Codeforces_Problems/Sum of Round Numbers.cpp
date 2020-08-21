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

		while(N!=0)
		{
			V.push_back(N%10);
			N = N/10;
		}

		// for(int i = 0;i<V.size();i++)
		// 	cout<<V[i]<<" ";
		// cout<<endl;

		int n = 1,count = 0;
		vector<int>res;

		for(int i = 0;i<V.size();i++)
		{
			if(V[i] != 0)
			{
				res.pb(V[i]*n);
				count++;
			}
			n = n * 10;
		}

		cout<<count<<endl;

		for(int i = 0;i<res.size();i++)
			cout<<res[i]<<" ";
		cout<<endl;

	}

	return 0;

}