#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long

#define MOD 100000007;

void solve()
{
	ll a,b;
	cin>>a>>b;

	// x = 2 from a & 1 from b i.e a = 2x + y;
	// y = 1 from a & 1 from b i.e b = x + 2y;

	if((2*a - b) >= 0 && (2*a - b) % 3 == 0 && (2*b - a) >= 0 && (2*b - a) % 3 == 0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("Input.txt","r",stdin);
	// freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
		solve();

	return 0;
}