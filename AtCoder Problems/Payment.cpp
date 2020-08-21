#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve()
{
	int N;
	cin>>N;

	if(N >= 1 && N<=1000)
	{
		cout<<1000 - N<<endl;
	}

	else if(N > 1000 && N<=2000)
	{
		cout<<2000 - N<<endl;
	}

	else if(N > 2000 && N<=3000)
	{
		cout<<3000 - N<<endl;
	}

	else if(N > 3000 && N<=4000)
	{
		cout<<4000 - N<<endl;
	}

	else if(N > 4000 && N<=5000)
	{
		cout<<5000 - N<<endl;
	}

	else if(N > 6000 && N<=7000)
	{
		cout<<7000 - N<<endl;
	}

	else if(N > 7000 && N<=8000)
	{
		cout<<8000 - N<<endl;
	}

	else if(N > 8000 && N<=9000)
	{
		cout<<9000 - N<<endl;
	}

	else
		cout<<10000 - N<<endl;
	
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