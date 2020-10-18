#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll a,b,c;
	cin>>a>>b>>c;

	ll d = c - a - b;

	if(d>0 && d*d > 4*a*b)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;

	return 0;
}