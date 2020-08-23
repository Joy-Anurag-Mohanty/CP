#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	int N,X,T;
	cin>>N>>X>>T;

	int time = 0,items = 0;

	if(N <= X)
		cout<<T<<endl;

	else
	{
		while(items < N)
		{
			time = time + T;
			items = items + X;
		}

		cout<<time<<endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
}