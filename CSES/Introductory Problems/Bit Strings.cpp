#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
#define MOD 1000000007;
 
void solve()
{
	ll N;
	cin>>N;
 
	ll mul = 1;
 
	for(ll i = 0;i < N; i++)
	{
		mul = (mul * 2) % MOD;
	}
 
	cout<<mul<<endl;
	
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
