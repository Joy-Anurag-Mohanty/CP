#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back


void solve()
{
	int N;
	cin>>N;

	int c0 = 0,c1 = 0,c2 = 0,c3 = 0;

	string S;

	while(N--)
	{
		cin>>S;

		if(S == "AC")
			c0++;

		else if(S == "WA")
			c1++;

		else if(S == "TLE")
			c2++;

		else
			c3++;
	}

	cout<<"AC x "<<c0<<endl;
	cout<<"WA x "<<c1<<endl;
	cout<<"TLE x "<<c2<<endl;
	cout<<"RE x "<<c3<<endl;
	
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