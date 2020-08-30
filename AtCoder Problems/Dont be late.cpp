#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	double D,T,S;
	cin>>D>>T>>S;

	double t = D/S;

	if(t <= T)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	solve();

	return 0;
}