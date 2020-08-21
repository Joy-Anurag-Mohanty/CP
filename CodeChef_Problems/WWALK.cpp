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

	int T;
	cin>>T;

	while(T--)
	{
		ll N;
		cin>>N;

		vector<ll>A; //Alice's Speed
		vector<ll>B; //Bob's speed

		ll x;

		for(ll i = 0;i<N;i++)
		{
			cin>>x;
			A.pb(x);
		}

		for(ll i = 0;i<N;i++)
		{
			cin>>x;
			B.pb(x);
		}

		//initiallly both are at 0

		ll Apos = 0; //Alice's postion
		ll Bpos = 0; //Bob's position

		ll ans = 0; //weird distance

		for(ll i = 0;i<N;i++)
		{
			// cout<<"Alice's Pos:"<<Apos<<" Speed: "<<A[i]<<endl;
			// cout<<"Bobs's Pos:"<<Bpos<<" Speed: "<<B[i]<<endl;

			if(Apos == Bpos && A[i] == B[i])
			{
				//they walk together

				// cout<<"Walk together"<<endl;

				Apos = Apos + A[i];
				Bpos = Bpos + B[i];

				ans = ans + A[i];
			}

			else
			{
				Apos = Apos + A[i];
				Bpos = Bpos + B[i];
			}
		}

		cout<<ans<<endl;
	}

	return 0;
}