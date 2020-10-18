#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	int N;
	cin>>N;

	int A = 0; //points for Chef
	int B = 0; //points for Mort

	int a,b,suma,sumb;

	while(N--)
	{
		cin>>a>>b;

		for(suma = 0;a>0;suma+=a%10,a/=10);
		for(sumb = 0;b>0;sumb+=b%10,b/=10);	

		if(suma > sumb)
			A++;
		else if(sumb > suma)
			B++;
		else
		{
			A++;
			B++;
		}
	}

	if(A > B)//Chef wins
		cout<<0<<" "<<A<<endl;
	else if(B > A)//Morty Wins
		cout<<1<<" "<<B<<endl;
	else//draw
		cout<<2<<" "<<A<<endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

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
