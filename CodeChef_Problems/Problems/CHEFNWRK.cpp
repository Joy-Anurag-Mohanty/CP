#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

int findTrips(int N,int K,vector<int>V)
{
	int trips = 1, w = 0;

	for(int i = 0; i < N; i++)
	{
		if(V[i] > K)
			return -1;

		w = w + V[i];

		if(w > K)
		{
			trips++;
			w = V[i];
		}
	}

	return trips;
}

void solve()
{
	int N,K;
	cin>>N>>K;

	//cout<<N<<" "<<K<<endl;

	vector<int>V;

	for(int i = 0 ; i < N ;i++)
	{
		int inp;
		cin>>inp;
		V.pb(inp);
	}

	int res = findTrips(N,K,V);

	cout<<res<<endl;
}	

int main(int argc, char const *argv[])
{	
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	//int cs = 1;

	while(T--)
	{
		// cout<<"case #"<<cs<<": "<<endl;
		solve();
		// cs++;
	}

	return 0;
}