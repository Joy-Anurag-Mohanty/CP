#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);
	
	ll X;
	cin>>X;

	ll P = 100; //pricipal

	ll T = 0;

	while(P < X)
	{
		P = P + P/100;
		T++;
	}

	cout<<T<<endl;

	return 0;
}