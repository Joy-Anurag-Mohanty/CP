#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	ll N;
	char inp;
	cin>>N;

	vector<char>V;

	for(ll i = 0;i<N;i++)
	{
		cin>>inp;
		V.pb(inp);
	}

	//count number of As and Bs

	ll a = 0, b = 0;

	for(ll i = 0;i<N;i++)
	{
		if(V[i] == 'A')
			a++;
		else
			b++;
	}

	ll s1 = N/2;
	ll s2 = N/2 + 1;

	//cout<<s1<<" "<<s2<<" "<<a<<" "<<b<<" ";

	if(a == s1 && b == s2)
		cout<<"Y"<<endl;

	else if(a == s2 && b == s1)
		cout<<"Y"<<endl;

	else
		cout<<"N"<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	int cs = 1;

	while(T--)
	{
		cout<<"Case #"<<cs<<": ";
		solve();
		cs++;
	}
}