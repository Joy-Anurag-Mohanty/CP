#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back
 
void solve()
{
	ll N;
	cin>>N;
 
 
	vector<ll>V;
 
	for(ll i = 1; i <= N; i++)
		V.pb(i);
 
	if(N == 1)
		cout<<V[0];
 
	else if(N == 2)
		cout<<"NO SOLUTION";
 
	else if(N == 3)
		cout<<"NO SOLUTION";
 
	else
	{
		vector<ll>V1;
		vector<ll>V2;
 
		for(ll i = 0; i <  N; i++)
		{
			if(V[i] % 2 == 0)
				V1.pb(V[i]);
			else
				V2.pb(V[i]);
		}
 
		for(ll i = 0; i<V1.size(); i++)
			cout<<V1[i]<<" ";
		for(ll i = 0; i<V2.size(); i++)
			cout<<V2[i]<<" ";
	}
 
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
