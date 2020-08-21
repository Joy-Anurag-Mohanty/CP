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
		ll TS;
		cin>>TS;

		if(TS % 2 != 0) // 1 <= JS <= TS and JS should be even
		{
			//TS is odd -> R is Odd
			//L -> Odd as L = 1

			ll N = (TS - 1)/2; // N -> is even
			cout<<N<<endl;
		}

		else
		{
			//find out highest power of 2 that divides TS

			ll temp = (TS & (~(TS - 1))); //bit magic

			//cout<<temp<<endl;

			ll TS_final = TS / temp; //TS_final will always be odd

			//cout<<TS_final<<endl;

			ll N = (TS_final - 1)/2;
			cout<<N<<endl;
		}

	}

	return 0;
}