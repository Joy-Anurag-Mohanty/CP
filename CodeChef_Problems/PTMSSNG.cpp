#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	int pairs = 4*N - 1; //number of given pairs

	int x,y; //co-ordinates

	vector<int>X;
	vector<int>Y;

	while(pairs--)
	{
		cin>>x>>y;

		X.pb(x);
		Y.pb(y);
	}

	int resx = 0,resy = 0;

	for(int i = 0;i<X.size();i++)
		resx = resx ^ X[i];

	for(int i = 0;i<Y.size();i++)
		resy = resy ^ Y[i];

	cout<<resx<<" "<<resy<<endl;

}

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
		solve();
	}

	return 0;
}