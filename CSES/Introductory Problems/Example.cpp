#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

void print(vector<ll>V)
{
	for(ll i = 0;i < V.size(); i++)
		cout<<V[i]<<" ";
	cout<<endl;
}

void solve()
{
	ll N;
	cin>>N;

	if((N*(N+1))/2 % 2)
	{
		cout<<"NO";
		return;
	}

	vector<ll>V1,V2;

	ll offset = 0;

	if(N % 4)
		offset = 3;
	else
		offset = 4;

	for(ll i = 0; i < (N-1)/4; i++)
	{
		V1.pb(4*i + 1 + offset);
		V1.pb(4*i + 4 + offset);
		V2.pb(4*i + 2 + offset);
		V2.pb(4*i + 3 + offset);
	}

	if(N % 4)
	{
		V1.pb(1);
		V1.pb(2);
		V2.pb(3);
	}

	else
	{
		V1.pb(1);
		V1.pb(4);
		V2.pb(2);
		V2.pb(3);
	}

	sort(V1.begin(), V1.end());
	sort(V2.begin(),V2.end());

	cout<<"YES"<<endl;

	cout<<V1.size()<<endl;

	print(V1);

	cout<<V2.size()<<endl;

	print(V2);
	
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	solve();

	return 0;
}