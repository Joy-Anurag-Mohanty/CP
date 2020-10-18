#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	ll S,N;
	cin>>S>>N;

	//check if S is odd

	ll c ;

	if(S % 2 == 1)
	{
		S = S - 1; //make it even
		c = 1;
	}

	else
		c = 0;

	c = c + (S/N);

	S = S % N;

	if(S == 0)
		cout<<c<<endl;
	else
		cout<<c+1<<endl;

}

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
		solve();
	}

	return 0;
}