#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
void solve()
{
	ll N;
	cin>>N;
 
	ll count = 0;
 
	for(ll i = 5; N/i >= 1; i = i * 5)
		count = count + N/i;
 
	cout<<count<<endl;
 
	
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
