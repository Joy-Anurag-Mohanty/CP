#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	int num = 4*N - 1;

	int x,y;

	vector<int>X;
	vector<int>Y;

	map<int,int>mpx;
	map<int,int>mpy;

	for(int i = 0;i<num;i++)
	{
		cin>>x>>y;
		X.pb(x);
		Y.pb(y);
	}

	for(int i = 0;i<num;i++)
	{
		mpx[X[i]]++;
		mpy[Y[i]]++;
	}

	//find out num which has odd occurences

	for(auto x : mpx)
		cout<<x.first<<" "<<x.second<<endl;

}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

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
