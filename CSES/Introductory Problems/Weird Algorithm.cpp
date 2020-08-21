#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
void solve()
{
	ll N;
	cin>>N;
 
	while(N != 1)
	{
		if(N & 1)
		{
			cout<<N<<" ";
			N = N*3 + 1;
		}
 
		else
		{
			cout<<N<<" ";
			N = N/2;
		}
	}
 
	cout<<1<<endl;
 
}
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
 
	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);
 
 	solve();
 
	return 0;
}
