#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	ll N;
	cin>>N;

	if(N % 2 == 0)
		cout<<N/2<<endl;
	else
		cout<<N/2 + 1<<endl; 

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	freopen("Input.txt","r",stdin);
	freopen("Output.txt","w",stdout);

	int T;
	cin>>T;

	while(T--)
	{
		solve();
	}

	return 0;
}