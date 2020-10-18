#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	ll T;
	cin>>T;

	while(T--)
	{
		ll N,A,B;
		cin>>N>>A>>B;

		string S = "";

		for(ll i = 0;i<N;i++)
			S += (char)('a'+i%B);

		cout<<S<<endl;
	}
}