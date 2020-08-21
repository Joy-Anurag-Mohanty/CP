#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	int n,m,k;
	cin>>n>>m>>k;

	int c = n/k;

	int t1 = min(m,c);

	int t2 = (m-t1+k-2)/(k-1);

	cout<<t1 - t2<<endl;
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