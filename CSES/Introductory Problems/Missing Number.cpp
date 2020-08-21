#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
void solve()
{
	ll N,inp;
	cin>>N;
 
	//cout<<N<<endl;
 
	vector<ll>V;
 
	for(ll i = 0; i < N-1; i++)
	{
		cin>>inp;
		V.pb(inp);
	}
 
	ll sum = 0;
 
	for(ll i = 0; i <V.size(); i++)
	{
		sum = sum + V[i];
	}
 
	//cout<<sum<<endl;
 
	//cout<<((N*(N+1))/2)<<endl;
 
	ll res = ((N*(N+1))/2) - sum;
 
	cout<<res<<endl;
 
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
