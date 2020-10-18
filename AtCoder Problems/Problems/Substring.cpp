#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const ll MOD = 1000000007;

vector<int>V;

void solve()
{
	string S,T;
	cin>>S>>T;

	int count = 0, c = 0;

	for(int i = 0; i <= S.length() - T.length(); i++)
	{
		for(int j = 0; j < T.length(); j++)
		{
			if(S[i+j] == T[j])
				c++;
		}

		count = max(count,c);
		c = 0;
	}

	cout<<T.length() - count<<endl;
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