#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define pb push_back

void solve()
{
	ll N;
	cin>>N;

	ll p2 = 0;

	//find highest power of 2

	while(N % 2 == 0)
	{
		N /= 2;
		p2++;
	}

	ll p3 = 0;

	//find highest power of 3

	while(N % 3 == 0)
	{
		N /= 3;
		p3++;
	}

	//after performing divisions N -> 1 and p3 >= p2

	if(N == 1 && p3 >= p2)
		cout<<p3 + p3 - p2<<endl;
	else
		cout<<-1<<endl;
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