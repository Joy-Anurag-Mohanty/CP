#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

void solve()
{
	string S,T;
	cin>>S;
	cin>>T;

	int c = 0;

	for(int i = 0;i<S.length();i++)
	{
		if(S[i] != T[i])
			c++;
	}	

	cout<<c<<endl;
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