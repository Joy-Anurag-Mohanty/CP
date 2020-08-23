#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
	string inp;
	cin>>inp;

	int digSum = 0;

	for(int i = 0; i < inp.length(); i++)
		digSum += (inp[i] - '0');

	if(digSum % 9)
		cout<<"No";
	else
		cout<<"Yes";
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