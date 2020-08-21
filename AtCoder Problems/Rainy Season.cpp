#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	string S;
	cin>>S;

	if(S == "RSS" || S == "SRS" || S == "SSR" || S == "RSR")
		cout<<1<<endl;	

	else if(S == "RRS" || S == "SRR")
		cout<<2<<endl;

	else if(S == "RRR")
		cout<<3<<endl;

	else
		cout<<0<<endl;
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